def avoidObstacles(inputArray):
    for i in range(1,40):
        isValid = True
        for v in inputArray:
            if (v % i == 0):
                isValid = False
                break
        if isValid:
            return i
    return -1

print(avoidObstacles([5, 3, 6, 7, 9]))
print(avoidObstacles([2, 3]))
print(avoidObstacles([1, 4, 10, 6, 2]))
