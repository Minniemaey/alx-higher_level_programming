#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    mat = (map(lambda vectors: list(map(lambda m: m**2, vectors)), matrix))
    return list(mat)
