def fizz_buzz(n):
    res = []
    for i in range(1, n+1):
        str = ""
        if i % 5 == 0:
            str += "Buzz"
        if i % 3 == 0:
            str += "Fizz"
        if i % 5 != 0 and i % 3 != 0:
            str += str(i)
        res.append(str)
    return res