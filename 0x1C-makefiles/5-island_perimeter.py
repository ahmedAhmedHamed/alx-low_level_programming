#!/usr/bin/python3
"""
0x1C 5-island perimeter
"""


def island_perimeter(grid):
    """
    Finds the perimeter of an island
    """
    result_perimeter = 0
    grid_size = len(grid)
    for row in range(grid_size):
        for col in range(grid_size):
            element = grid[row][col]
            if element == 1:
                perimeter = 4

                if row - 1 >= 0:
                    if grid[row - 1][col] == 1:
                        perimeter -= 1
                if row + 1 < grid_size:
                    if grid[row + 1][col] == 1:
                        perimeter -= 1
                if col - 1 >= 0:
                    if grid[row][col - 1] == 1:
                        perimeter -= 1
                if col + 1 < grid_size:
                    if grid[row][col + 1] == 1:
                        perimeter -= 1

                result_perimeter += perimeter

    return result_perimeter
