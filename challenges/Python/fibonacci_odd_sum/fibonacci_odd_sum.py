def fibonacci_odd_sum :
    prev, cur = 0, 1
    total = 0
    while True:
     prev, cur = cur, prev + cur
     if cur >= 10000:
        break
    if cur % 2 != 0:
        total += cur
     print(total)
