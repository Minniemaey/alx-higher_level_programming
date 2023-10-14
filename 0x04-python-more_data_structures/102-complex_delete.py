#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    dict_list = list(a_dictionary.keys())
    for values in dict_list:
        if value == a_dictionary.get(values):
            del a_dictionary[values]
    return (a_dictionary)
