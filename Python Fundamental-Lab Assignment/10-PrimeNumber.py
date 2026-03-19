number = int(input("Enter a number: "))
flag = 0
for i in range(2,number):
    if number % i == 0:
        flag = 1
        break
if flag == 0:
    print(f"{number} is a prime number")
else:
    print(f"{number} is not a prime number")