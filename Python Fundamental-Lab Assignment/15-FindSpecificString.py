List1 = ['apple', 'banana', 'mango', 'orange', 'grape']
Find_item = input("Enter the fruit name to find : ")
for fruit in List1:
    if fruit == Find_item:
        print(Find_item, "is found in the list.")
        break
else:
    print(Find_item, "not found in the list.")