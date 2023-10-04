#!/usr/bin/python3
for c in range(122, 96, -1):
    if (c % 2 == 0):
        c = chr(c)
    else:
        c = chr(c - 32)
    print("{}".format(c), end="")
