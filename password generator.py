import random
def passwordGenerator():
    lowerchars = ["a","b","c","d","e"]
    uperchars= ["A","B","C","D","E"]
    specialchars = ["&","!","*"]
    numericchars = ["1","2","3","4","5"]
    password = random.choice(lowerchars) + random.choice(uperchars) + random.choice(specialchars) + random.choice(numericchars)
    password = password + password + password + password


    return password

password2 = input("please eneter that number: ")
password2 = str(password2)
if password2 == passwordGenerator:
    print("the password is correct correct")
else:
    print("the password you entered is not corect")


