def pattern(n):
    k = 2*n-2#it is used to make spaces in a pattern
    for i in range( 0, n-1):#stands fow column
        for j in range( 0,k):#stands for rows
            print( end = " ")
        
        k = k-2
       
        for j in range(0, i+1):
            print(" * ", end = " ")
        print("\r")# it will print every statement in a new line 
    k =  -1
    for i in range (n-1,-1,-1):
        for j in range(k, -1,-1):
            print(end=" ")
        k = k +2
        for j in range(0,i+1):
            print(" * ", end = " ")
        print("\r")
                
pattern(5)

#you can also make a diamond pattern for the numbers  by placing the value of x in rows and the column in a formula.
#you can check it down bellow
def pattern(n):
    k = 2*n-2#it is used to make spaces in a pattern
    x = 0
    for i in range( 0, n-1):#stands fow column
        x = x+1
        for j in range( 0,k):#stands for rows
            print( end = " ")
        
        k = k-2
       
        for j in range(0, i+1):
            print(x, end = " ")
        print("\r")# it will print every statement in a new line 
    k =  -1
    x = 0
    for i in range (n-1,-1,-1):
        x = x+1
        for j in range(k, -1,-1):
            print(end=" ")
        k = k +2
        for j in range(0,i+1):
            print(x, end = " ")
        print("\r")
pattern(5)
