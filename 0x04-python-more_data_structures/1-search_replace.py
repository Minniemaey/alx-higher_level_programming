#!/usr/bin/python3
def search_replace(my_list, search, replace):
    my_list1 = []
    for element in my_list:
        if element == search:
            my_list1.append(replace)
        else:
            my_list1.append(element)
    return my_list1
