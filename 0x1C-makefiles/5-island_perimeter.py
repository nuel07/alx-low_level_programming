#!/usr/bin/python 3
"""An Island's perimeter"""

def island_perimeter(grid):
    """calculates and returns perimeter of an island described in grid
    Args(list): list of integers that define the island
    Return: int
    """
    side = 0
    edge = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                side += 1
                if x != 0 and grid[x-1][y] == 1:
                    edge += 1
                if y != 0 and grid[x][y-1] == 1:
                    edge += 1

    return (4 * side) - (2 * edge)
