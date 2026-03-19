Age = int(input("Enter the Age of Person: "))
Weight = float(input("Enter the Weight of Person: "))
if Age >= 18 and Age <= 65:
    if Weight >= 50:
        print("The person is eligible to donate blood.")
    else:
        print("The person is not eligible to donate blood.")
else:
    print("The person is not eligible to donate blood.")
