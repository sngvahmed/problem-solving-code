def isIPv4Address(inputString):
    array = inputString.split('.')
    if (array.__len__() != 4):
        return False
    for v in array:
        try:
            if int(v) < 0 or int(v) > 255:
                return False
        except Exception:
            return False
    return True


print (isIPv4Address((".254.255.0")))
