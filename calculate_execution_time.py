from time import time
start = time()

word = "Python Programming"
text = word.split()
space = " "

for letter in text:
    space = space + str(letter[0]).upper()
print(space)

# Calculating Execution Time
end = time()
execution_time = end - start
print("Execution Time : ", execution_time)
