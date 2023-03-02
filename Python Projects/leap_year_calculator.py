# This is how you work out whether if a particular year is a leap year.
  # on every year that is evenly divisible by 4 
    # **except** every year that is evenly divisible by 100 
    # **unless** the year is also evenly divisible by 400

#Request the input for calculate the leap year.
year = int(input("\nWhich year do you want to check? "))
#Check the conditions.
if year % 4 == 0:
  if year % 100 == 0:
    if year % 400 == 0:
      print("Leap year.")
    else:
      print("Not leap year.")
  else:
    print("Leap year.")
else:
  print("Not leap year.")