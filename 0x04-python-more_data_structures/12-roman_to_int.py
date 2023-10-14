#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0
    fulnum = 0
    num = 0
    numeral = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    for n in reversed(roman_string):
        num = numeral[n]
        fulnum = fulnum + num if fulnum < num * 5 else -num
    return fulnum
