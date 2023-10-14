#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0

    numerator = 0
    denominator = 0

    for pairs in my_list:
        numerator += pairs[0] * pairs[1]
        denominator += pairs[1]

    return (numerator / denominator)
