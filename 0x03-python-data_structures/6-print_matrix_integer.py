#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if matrix != [[]]:
        [print("{:d}".format(num), end=" " if num != row[-1] else '\n')
            for row in matrix for num in row]
    else:
        print()
