from functools import lru_cache

@lru_cache

def F(n):
    if n < 2:
        return n
    elif n % 2 == 0:
        return F(n - 2) + F(n - 1)
    else:
        return 2 * F(n - 1)

print(F(20))