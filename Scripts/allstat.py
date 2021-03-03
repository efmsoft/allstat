import gzip
import re

START_CODE = \
    "#include \"../AllStatDefs.h\"\n" \
    "\n" \
    "using namespace AllStat;\n" \
    "\n" \
    "#ifndef __clang__\n" \
    "#pragma optimize(\"\", off)\n" \
    "#endif\n" \
    "\n" 
START_CODE2 = \
    "\n" \
    "#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)\n" \
    "static constexpr uint64_t _GENERATOR_ = AS_GENERATOR::AS_{};\n" \
    "#endif\n" \
    "\n" \
    "static const STATUS_ITEM Status[] =\n" \
    "{{\n"
FORMAT_CODE = "  /*{}*/ {{ (uint32_t){}, \"{}\", AS_DESCR_HANDLE(\"{}\", {}), {}, {} }},\n"
LAST_ITEM = "  { (uint32_t)0, nullptr }\n"
END_CODE = "};\n\n"


HASH_TABLE_SIZE = 64

HASH_ENTRY_CODE_START = \
    "static int {}Hash{}List[{}] = {{"
HASH_TABLE_CODE_START = \
    "\n" \
    "static const int* {}HashTable[] =\n" \
    "{{\n"
HASH_TABLE_CODE_FORMAT = \
    "  {}Hash{}List"

CODE_FOOTER = \
    "\n" \
    "void {}GetTables(TABLES& t)\n" \
    "{{\n" \
    "  t.Items = Status;\n" \
    "  t.Code2name = Code2NameHashTable;\n" \
    "  t.Name2code = Name2CodeHashTable;\n" \
    "#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)\n" \
    "  t.DescrGz = CompressedDescr;\n" \
    "  t.DescrGzLen = sizeof(CompressedDescr);\n" \
    "  t.DescrLen = DescrBlockSize;\n" \
    "#else\n" \
    "  t.DescrGz = nullptr;\n" \
    "  t.DescrGzLen = 0;\n" \
    "  t.DescrLen = 0;\n" \
    "#endif // AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)\n" \
    "}}\n"

HPP_HEADER = \
    "#ifndef {}\n" \
    "#define {}\n" \
    "\n" \
    "#include \"AllStat.h\"\n" \
    "\n" \
    "AS_NAMESPACE_BEGIN()\n" \
    "\n" \
    "#if AS_UNDEF_VALUES\n"

HPP_ENUM_HEADER = \
    "#endif  // #if AS_UNDEF_VALUES\n" \
    "\n" \
    "enum AS_DEFINE_NAME({})\n" \
    "{{\n"
HPP_ENTRY = \
    "  AS_DEFINE_NAME({}) = {},\n"
HPP_FOOTER = \
    "}};\n\n" \
    "\n" \
    "AS_NAMESPACE_END()\n\n" \
    "#endif  // #ifndef {}\n"


def hash_string(str):
    hash = 0
    for c in str:
        hash = ((3 * hash) & 0xFFFFFFFF) + int(hash / 2)
        v = ord(c)
        hash += v
        hash = hash & 0xFFFFFFFF
    return hash


def codestr2int(code_str):
    if code_str.startswith("0x") or code_str.startswith("0X"):
        return int(code_str, base=16)
    return int(code_str)

    
def hash_code(code_str):
    code = codestr2int(code_str)
    str = "{0:08X}".format(code & 0xFFFFFFFF)
    return hash_string(str)


def hash_entry_array():
    hash_entry = []
    for i in range(0, HASH_TABLE_SIZE):
        hash_entry.append([])
    return hash_entry


def generate_hash_table(out, context, hash_type):
    hash_entry = context[hash_type]

    total = 0
    for i in range(0, HASH_TABLE_SIZE):
        k = 0
        total += len(hash_entry[i])
        out.write(HASH_ENTRY_CODE_START.format(hash_type, i, len(hash_entry[i]) + 1))
        for j in hash_entry[i]:
            if k:
                out.write(", ")
            out.write("{}".format(j))
            k = k + 1
        out.write(
            "{}-1}};\n".format(", " if len(hash_entry[i]) else ""))

    out.write(HASH_TABLE_CODE_START.format(hash_type))
    for i in range(0, HASH_TABLE_SIZE):
        if i:
            out.write(",\n")
        out.write(HASH_TABLE_CODE_FORMAT.format(hash_type, i))
    out.write("\n};\n\n")


def extract_description(lines, line_index):
    if line_index < 3:
        return False, ""

    if not re.search(r'^//.*\n?$', lines[line_index - 1]):
        return False, ""

    i = 2
    description = ""
    while line_index - i > 0:
        text = lines[line_index - i]
        m = re.search(r'^//\s*(.*)\s*\n?$', text)
        if not m:
            return False, ""

        part = m.group(1)
        if not part:
            if not description:
                return False, ""

            text = lines[line_index - i - 1]
            m = re.search(r'^//\s*MessageText:\s*\n?$', text)
            if not m:
                return False, ""

            return True, description.rstrip(" ")

        trans = str.maketrans({"\"": "\\\"", "\\": "\\\\"})
        description = part.translate(trans) + " " + description
        i += 1

    return False, ""


def print_stat(out, items):
    print("Calculating statistics")

    descr_len = 0
    const_len = 0

    dup_name = 0
    dup_names = []

    dup_total = 0
    dup_map = {}
    dup = []
    for item in items:
        const_len += len(item["name"])
        descr_len += len(item["descr"])

        occurence = 0
        name_occurence = 0
        for i in items:
            if i["name"] == item["name"]:
                name_occurence += 1
            if i["value"] == item["value"]:
                occurence += 1

        if name_occurence > 1:
            dup_name += 1
            if item["name"] not in dup_names:
                if len(dup_names) < 10:
                    dup_names.append(item["name"])

        if occurence > 1:
            if len(dup) < 10:
                if str(item["value"]) not in dup_map:
                    dup.append(item["name"])
            dup_map[str(item["value"])] = 1
            dup_total += occurence - 1

    out.write("// \n")
    out.write("// Item count: {}\n".format(len(items)))
    out.write("// Constant names: {} bytes\n".format(const_len))
    out.write("// Description text: {} bytes\n".format(descr_len))
    out.write("// Duplicated names: {} {}\n".format(dup_name, ' '.join(dup_names)))
    out.write("// Duplicated constants: {} {}\n".format(len(dup_map), ' '.join(dup)))
    out.write("// Constant duplication count: {}\n".format(dup_total))
    out.write("// \n")
    out.write("\n")


def append_status_item(context, name, value, description, source, os):
    for item in context["items"]:
        if item["name"] == name and item["os"] == os:
            return

    item = {"name": name, "value": value, "descr": description, "descr_offs": 0, "os": os, "source": source}
    context["items"].append(item)


def append_item_description(context, name, os, descr):
    for item in context["items"]:
        if item["name"] == name and item["os"] == os:
            descr.strip()
            if item["descr"]:
                item["descr"] += " "

            item["descr"] += descr
            return True

    return False


def default_item(context, name, value, description, source, os, replace=False):
    add_item = {"name": name, "value": value, "descr": description, "descr_offs": 0, "source": source, "os": os}
    code = codestr2int(value)

    position = 0
    for item in context["items"]:
        v = codestr2int(item["value"]) 
        if v > code:
            break

        if (v < code):
            position += 1
            continue

        i = 0
        while codestr2int(context["items"][position + i]["value"]) == code:
            if context["items"][position + i]["name"] != name:
                i += 1
                continue

            if not replace:
                add_item["value"] = context["items"][position + i]["value"]
                add_item["descr"] = context["items"][position + i]["descr"]
            del context["items"][position + i]
            break

        context["items"].insert(position, add_item)
        return

    position = 0
    for item in context["items"]:
        v = codestr2int(item["value"]) 
        if v < code:
            position += 1
            continue

        # Insert before item with greater code
        context["items"].insert(position, add_item)
        return

    # Push to end of array
    append_status_item(context, name, value, description, source, os)


def generate_var_name(s, src_map):
    rexp = r'\W+'
    var = "Src_" + re.sub(rexp, '', s)

    while True:
        found = False
        for i in src_map:
            if var == i["var"]:
                found = True
                break

        if not found:
            break

        var = var + "_"

    return var


def generate_sources(out, context):
    print("Generating sources array")

    src_list = []
    for item in context["items"]:
        if item["source"] not in src_list:
            src_list.append(item["source"])

    src_map = []
    for s in src_list:
        item = {"var": generate_var_name(s, src_map), "source": s}
        src_map.append(item)

    for s in src_map:
        var = "static const char* {} = \"{}\";\n".format(s["var"], s["source"])
        out.write(var)

    for item in context["items"]:
        for s in src_map:
            if item["source"] == s["source"]:
                item["source"] = s["var"]
                break


def generate_compressed_description_block(out, context):
    data = bytearray()
    for item in context["items"]:
        item["descr_offs"] = len(data)
        d = bytearray(item["descr"].encode('utf-8') +  b'\x00')
        data += d

    cdata = gzip.compress(bytes(data))
    cstr = ''.join('0x{:02x}, '.format(x) for x in cdata)

    out.write("\n#if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)\n")
    out.write("static int DescrBlockSize = {};\n".format(len(data)))
    out.write("static const uint8_t CompressedDescr[] =\n")
    out.write("{\n")

    rate = round(len(data) / len(cdata), 1)
    out.write("  // Uncompressed size: {}, Compressed size: {}, Rate: {}\n".format(len(data), len(cdata), rate))

    b = cstr.split(', ')
    n = len(b) - 1

    i = 0
    while i < n:
        out.write("  ")
        for col in range(16):
            if i >= n:
                break

            v = b[i]
            out.write("{}, ".format(v))
            i += 1

        out.write("\n")

    out.write("};\n")
    out.write("#endif  // #if AS_COMPRESS_DESCRIPTION && !defined(AS_NO_DESCRIPTION)\n")


def generate_status_item_array(out, context):
    out.write(START_CODE)
    generate_sources(out, context)

    generate_compressed_description_block(out, context)

    print("Generating status items array")
    out.write(START_CODE2.format(context["generator"]))

    index = 0
    for item in context["items"]:
        line = FORMAT_CODE.format(
            index
            , item["value"]
            , item["name"]
            , item["descr"]
            , item["descr_offs"]
            , item["source"], item["os"]
        )
        out.write(line)
        index += 1

    out.write(LAST_ITEM)
    out.write(END_CODE)

    print_stat(out, context["items"])


def generate_hash_tables(context):
    print("Generating hash tables")

    index = 0
    for item in context["items"]:
        en2c = hash_string(item["name"]) % HASH_TABLE_SIZE
        ec2n = hash_code(item["value"]) % HASH_TABLE_SIZE
        context["Name2Code"][en2c].append(index)
        context["Code2Name"][ec2n].append(index)
        index += 1
        
    out = context["stream"]
    generate_hash_table(out, context, "Name2Code")
    generate_hash_table(out, context, "Code2Name")
    print("Done. Items count:", len(context["items"]))


def generate_hpp(out, context, name, os_suffix=False):
    macro = "__AS_" + name + "__"
    out.write(HPP_HEADER.format(macro, macro))

    for item in context["items"]:
        if os_suffix and item["os"] != "AS_OS_ANY":
            continue
        
        line = "#ifdef {}\n#undef {}\n#endif\n".format(item["name"], item["name"])
        out.write(line)

    out.write(HPP_ENUM_HEADER.format(name))
    for item in context["items"]:
        if os_suffix and item["os"] != "AS_OS_ANY":
            line = HPP_ENTRY.format(item["name"] + item["os"][5:], item["value"])
        else:
            line = HPP_ENTRY.format(item["name"], item["value"])

        out.write(line)

    out.write(HPP_FOOTER.format(macro))


def generate_footer(out, context):
    out.write(CODE_FOOTER.format(context["generator"]))


def status_item_generation(config, out, callback):
    context = {}
    context["stream"] = out
    context["items"] = []
    context["Name2Code"] = hash_entry_array()
    context["Code2Name"] = hash_entry_array()

    context = config.enum_sources(callback, context)
    context["items"].sort(key=lambda i: codestr2int(i["value"]))
    return context

