memo = {4}

for i in range(2,101):
    for j in range(2,101):
        memo.add(i**j)
        
print(len(memo))