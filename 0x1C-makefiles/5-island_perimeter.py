#!/usr/bin/python3
"""Island perimeter caculator."""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid: is a list of list of integers.
    Returns: the perimeter of teh island.
    """
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
    return perimeter
