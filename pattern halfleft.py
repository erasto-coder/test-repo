def pattern(n):


    k  = -1
    for i in range(n-1, -1, -1):
        for j in range(k, -1,-1):
            print(end=" ")
        k= k + 2
        for j in range(0,i+1):
            print("* ", end="")
        print("\r")
pattern(10)