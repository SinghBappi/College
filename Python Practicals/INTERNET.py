hours = float(input("Enter hours used: "))

if hours > 5:
    cost = 100
elif hours == 1:
    cost = 20
elif hours == 0.5:
    cost = 10
else:
    
    half_hours = hours / 0.5
    cost = int(half_hours) * 10

print(f"Total cost: ₹{cost}")
