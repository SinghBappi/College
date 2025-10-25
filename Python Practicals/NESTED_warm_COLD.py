temp = input("Enter temperature (WARM/COLD): ")
humidity = input("Enter humidity (DRY/HUMID): ")

if temp == "WARM" and humidity == "DRY":
    print("play basketball")
elif temp == "WARM" and humidity == "HUMID":
    print("Tennis")
elif temp == "COLD" and humidity == "DRY":
    print("cricket")
elif temp == "COLD" and humidity == "HUMID":
    print("swimming")
