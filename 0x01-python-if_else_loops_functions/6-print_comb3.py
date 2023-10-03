#!/usr/bin/python3
for i in range(0, 10):
    for j in range(0, 10):
        if i < j:
            if (i * 10 + j) != 89:
                print("{0}{1}".format(i, j), end=", ")
            else:
                print("{0}{1}".format(i, j))
