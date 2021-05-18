#the leap yeer allways is divisible by 4
# also it is divisible by 100
#and is divisible by 400 then lets use the nested if to impliment this


year = int(input("please enter the year that you need to check:  "))

if (year % 4)== 0:
    if (year % 100) == 0:
        if (year % 400)== 0:
            print("the year  is a leap year thank you!")
        else:
            print("the year is not  a leap year thank you!")
    else:
            print("the year is not  a leap year thank you!")        
else:
            print("the year is not  a leap year thank you!")