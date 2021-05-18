travelling = input("yes or no!")

while travelling == "yes":
    
    num = int(input("number of people travelling:  "))
    
    
    for num in range(1, num+1):
        name = input("Name")
        
        age = input("Age:")
        
        sex = input("Male or Female: ")
        print(name)
        print(age)
        print(sex)
        
        travelling = input("Oops!  forgot someone")