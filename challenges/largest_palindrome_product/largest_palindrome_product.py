product = 0

for a in range(999, 100, -1):
    for b in range(a, 100, -1):
        x = a * b
        if x > product:
            s = str(a * b)
            if s == s[::-1]:
                product = a * b
print(product)