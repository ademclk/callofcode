sum_of_even_fibonacci = 0
fibonacci_prev = 0
fibonacci = 1

while fibonacci < 4000000:
    fibonacci += fibonacci_prev
    fibonacci_prev = fibonacci - fibonacci_prev
    print(fibonacci)
    if fibonacci % 2 == 0:
        sum_of_even_fibonacci += fibonacci
print("Sum of even valued fibonacci numbers: " + str(sum_of_even_fibonacci))