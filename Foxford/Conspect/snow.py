# Если вы думаете что рекурсия, циклы и черепашка это слабые инструменте то вот вам:

from turtle import *

def go (length):
    if (length < 10):
        forward(length)
    else:
        go (length / 3)
        left(60)
        go (length / 3)
        right(120)
        go (length / 3)
        left(60)
        go (length / 3)

penup()
backward(200)
pendown()

for side in range(3):
    go(200)
    right(120)

done() # Нужно чтобы рисунок не проподал при окончании рисования

# Каким то образом это рисует снежинку Коха
