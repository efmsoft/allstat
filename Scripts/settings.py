import glob
import os
import xml.etree.ElementTree as et

from xml.dom import minidom


class CSettings:
    def __init__(self, section, maps = []):
        self.Cpp = ""
        self.Hpp = ""
        self.Source = []
        self.Maps = {}

        config_file = self.absolute_path('config.xml')
        file = open(config_file, 'r')

        data = file.read()
        tree = et.fromstring(data)

        def get_value(k, d=""):
            try:
                return tree.find(k).text
            except:
                return d

        cppout = self.absolute_path(get_value("output/cpp"))
        if not os.path.isdir(cppout):
            sys.exit("'{}' is not directory".format(cppout))
        self.Cpp = os.path.join(cppout, get_value(section + "/cpp"))

        hppout = self.absolute_path(get_value("output/h"))
        if not os.path.isdir(hppout):
            sys.exit("'{}' is not directory".format(hppout))
        self.Hpp = os.path.join(hppout, get_value(section + "/h"))

        for source in tree.findall(section + "/source"):
            self.Source.append(self.absolute_path(source.text))

        if not len(self.Source):
            sys.exit("source file(s)/folder(s) are not specified")

        for mi in maps:
            self.Maps[mi] = {}
            for item in tree.findall("map/" + mi + "/item"):
                k = item.attrib["key"].lower()
                v = item.attrib["value"]
                self.Maps[mi][k] = v


    def absolute_path(self, path):
        cur_file_path = os.path.abspath(os.path.dirname(__file__))
        ret_path = os.path.normpath(os.path.join(cur_file_path, path))
        return os.path.abspath(ret_path)

    def enum_sources(self, callback, param):
        for src in self.Source:
            for x in glob.glob(src, recursive=True):
                param = callback(self, param, x)
        return param


if __name__ == "__main__":
    config = CSettings("hresult")
    print(config.Cpp)
    print(config.Hpp)
    print(config.Source)

    def callback(c, p, x):
        print(x)
        p["list"].append(x)
        return p

    context = {"list": []}
    context = config.enum_sources(callback, context)
    print("files: {}".format(len(context["list"])))
