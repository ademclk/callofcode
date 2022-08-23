def pythagorean_triplet(num):
    for a in range(1, num // 3 + 1):
        for b in range(a+1, num // 2 + 1):
            c = num - a - b
            if a**2 + b**2 == c**2:
                return (a, b, c)
    return (0, 0, 0)

print(pythagorean_triplet(1000))
assert (200, 375, 425) == pythagorean_triplet(1000)

