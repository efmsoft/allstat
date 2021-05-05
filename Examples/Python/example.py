import allstat
import sys

def main():
    code = 2
    name = allstat.Errno2Name(code)
    if name == None:
        print("Constant is not defined")
        sys.exit(1)
  
    asi = allstat.AS_ITEM()
    if allstat.Name2ErrnoItem(name, asi):
        print("Unable to retrieve info item")
        sys.exit(1)

    descr = allstat.GetDescriptionStrC(asi.Description)
    print("Code: {}, Name: {}, Description: {}".format(code, name, descr))


if __name__ == '__main__':
    main()
  
