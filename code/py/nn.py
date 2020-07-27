input = [1.2, 5.1, 2.1]
weights = [3.1, 2.1, 8.7]
bias = 3

output = 0

for i in range(3):
    output += input[i]*weights[i]

print(output)
