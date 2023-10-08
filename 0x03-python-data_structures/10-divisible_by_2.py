#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    list1 = []
    for num in my_list:
        if num % 2 == 0:
            list1.append(True)
        else:
            list1.append(False)
    return list1
