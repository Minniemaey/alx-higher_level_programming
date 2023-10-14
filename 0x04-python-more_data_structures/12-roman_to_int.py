#!/usr/bin/python3
def calc(new_list):
    numcount = 0
    max_list = max(new_list)

    for n in new_list:
        if max_list > n:
            numcount += n

    return (max_list - numcount)


def roman_to_int(roman_string):
    if not roman_string or not isinstance(roman_string, str):
        return 0

    numeral = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    list_keys = list(numeral.keys())

    num = 0
    digitn = 0
    new_list = [0]

    for char in roman_string:
        for r_num in list_keys:
            if r_num == char:
                if numeral.get(char) <= digitn:
                    num += calc(new_list)
                    new_list = [numeral.get(char)]
                else:
                    new_list.append(numeral.get(char))

                digitn = numeral.get(char)

    num += calc(new_list)

    return (num)
