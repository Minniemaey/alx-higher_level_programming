#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    len = len(sys.argv) - 1
    print("{} argument{}{}"
          .format(len, "" if len == 1 else "s", "." if len == 0 else ":"))
    n = 1
    while n <= len:
        print("{}: {}".format(n, sys.argv[n]))
        n += 1
