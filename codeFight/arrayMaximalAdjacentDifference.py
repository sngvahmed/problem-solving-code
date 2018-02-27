#!/usr/bin/python
import sys

def arrayMaximalAdjacentDifference(inputArray):
    res = sys.maxsize * -1
    for i in range(0,inputArray.__len__() - 1):
        res = max(res, abs(inputArray.__getitem__(i) - inputArray.__getitem__(i + 1)))
    return res

print(arrayMaximalAdjacentDifference([2, 4, 1, 0]))