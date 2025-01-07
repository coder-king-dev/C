import random
rand = random.randint(1,50)
input_01 = int(input("Enter Number: "))
input_02 = int(input("Enter Number which want to divide: "))

calculation = input_01%input_02

if calculation == 0:
    print("Number Is Divisible")
    print(f"Success Number: {rand}")

else:
    print("Number is Not Divisible")
    print(f"Error : {rand}")


