# n = int(input("\nEnter n:"))
n = 4
words = [ 'bcdef', 'abcdefg', 'bcde', 'bcdef' ]
# for i in range(n):
    # words.append(input())

print(words)

lookup = {}
uw = 0
for word in words:
    if word not in lookup:
        uw += 1
        lookup[word] = 1
    else:
        lookup[word] += 1

print(uw)
for a in lookup:
    print(lookup[a], end=' ')
