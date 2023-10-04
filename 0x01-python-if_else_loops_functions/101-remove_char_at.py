#!/usr/bin/python3
def remove_char_at(str, n):
    strcopy = ""
    for char in range(0, len(str)):
        if char != n:
            strcopy += str[char]
    return (strcopy)
