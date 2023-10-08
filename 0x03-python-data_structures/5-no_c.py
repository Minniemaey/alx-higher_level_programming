#!/usr/bin/python3
def no_c(my_string):
    newstr = ""
    for letter in my_string:
        if letter != 'c' and letter != 'C':
            newstr += letter
    return newstr
