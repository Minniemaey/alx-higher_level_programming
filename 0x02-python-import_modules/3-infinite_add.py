#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    sum = 0
    args_len = len(sys.argv) - 1
    for arg in range(args_len):
        sum += int(sys.argv[arg + 1])
    print(sum)
