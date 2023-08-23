#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list[list[int]]): The grid representing the island.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 4  # Count the square itself

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract shared edge with upper cell

                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract shared edge with left cell

    return perimeter
