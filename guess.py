import random as r

num = r.randrange(100)
Guess = 5
while Guess >=0:
    your_guess = int(input("enter your guess: "))

    def check(x):
        if your_guess == x:
            print("you win")
        elif your_guess > x:
            print("your guess are close, keep trying lower")
        else:
            print("your close, keep trying higher")

    if Guess > 1:
        check(num) 
    elif Guess == 1:
        check(num)
        print("your lost")
    Guess = Guess - 1       