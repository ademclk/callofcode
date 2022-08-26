def quicksort(lst):
    if len(lst) <= 1:
        return lst

    pivot = lst.pop()
    lhs = [n for n in lst if n <= pivot]
    rhs = [n for n in lst if n > pivot]
    return quicksort(lhs) + [pivot] + quicksort(rhs)

if __name__ == '__main__':
    # input should be space seperated numbers
    print(*quicksort([int(n) for n in input().split()]), sep=' ')
