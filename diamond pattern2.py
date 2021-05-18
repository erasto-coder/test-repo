y = int(input("please enter the number: "))

print("the number entered is ", y)

if(y == 11):
    print("This is your day you escaped from ypur mothers womb\n\n\n1 THEN WAIT WE NEED TO SHOW YOU SOMETHING!!\n\n")
    
    month = str(input("prease enter month:"))
    print("this  is the complete day that mr. echeda you were born!!\n\n", y  , month)
    
    print("\n\n")#the code that i maay start in the next round .
    mwanzo = str(input("do you need to continue??\n"))
    
    if k == y :
        print("we are walking for the choice you have made to us!!!!\n\n")
    

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
    elif k == N:
        print("quity")
        
        
else:
    print("\n\nsorry mr. echeda wait for your day to come!!")