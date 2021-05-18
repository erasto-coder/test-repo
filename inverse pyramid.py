def pattern(n):
    k = 2*n-2#it is used to make spaces in a pattern
    for i in range(n, -1, -1):#stands fow rows
        for j in range(k, 0, -1):#stands for column
        
            print(end="  ")#make the star to leave a space in btn from left
            
        k = k+1
        
        for j in range(0, i+1):#it make the pattern to begin from 1 to the end try writing i+2 and it will be seen to you
                               #also this can be used to draw a mstatili by shape when writen as i+k
            print(" * ", end = " ")# it leaves a space from right
        print("\n")# it will print every statement in a new line 
        
pattern(4)

# i atands for the rows in a pattern but j stands for the collumn