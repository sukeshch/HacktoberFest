import random
n = int(input("Enter some number : "))
print("Printing random numbers")
for i in range(n):
  print(random.randrange(n))
