#!/usr/bin/python3
"""Module that calculates the perimeter of an island given in a grid."""


def per_num_neighbors(grid, k, q):
    """fxt that returns number of neighbors a cell has in a grid."""

    num = 0

    if k <= 0 or not grid[k - 1][q]:
        num += 1
    if q <= 0 or not grid[k][q - 1]:
        num += 1
    if q >= len(grid[k]) - 1 or not grid[k][q + 1]:
        num += 1
    if k >= len(grid) - 1 or not grid[k + 1][q]:
        num += 1

    return num


def island_perimeter(grid):
    """fxn to return perimeter of the island in grid."""

    per = 0
    for k in range(len(grid)):
        for q in range(len(grid[k])):
            if grid[k][q]:
                per += per_num_neighbors(grid, k, q)

    return per
