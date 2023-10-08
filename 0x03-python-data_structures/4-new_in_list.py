#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    elem_no = len(my_list)
    my_list1 = [num for num in my_list]
    if idx < 0:
        return my_list1
    elif idx > elem_no - 1:
        return my_list1
    else:
        my_list1[idx] = element
        return my_list1
