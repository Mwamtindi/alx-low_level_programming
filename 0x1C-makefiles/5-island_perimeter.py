#!/usr/bin/python3
"""Module that calculates the perimeter of an island given in a grid."""

def peri_num_neighbors(grid, k, l):
    """fxt that returns number of neighbors a cell has in a grid."""

    num = 0

    if k <= 0 or not grid[k - 1][l]:
        num += 1
    if l <= 0 or not grid[k][l - 1]:
        num += 1
    if l >= len(grid[k]) - 1 or not grid[k][l + 1]:
        num += 1
    if k >= len(grid) - 1 or not grid[k + 1][l]:
        num += 1

    return num

def island_perimeter(grid):
    """fxn to return perimeter of the island in grid."""

    per = 0
    for k in range(len(grid)):
        for l in range(len(grid[k])):
            if grid[k][l]:
                per += per_num__neighbors(grid, k, l)

    return per
