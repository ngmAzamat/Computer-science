def F(n):
    if n > 2:
        return F(n - 1) + F(n - 2)
    else: # Необезательно писать else, так как если return все завершится и else точно не выполнится
        return 1

print(F(15))