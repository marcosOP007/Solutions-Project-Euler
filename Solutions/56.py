def sum_digits(n):
    total = 0
    while n > 0:
        total += n % 10  
        n = n // 10 
    return total

resp = 1;

for i in range(1,100):
    for b in range(1,100):
        resp = max(resp, sum_digits(i**b))

print(resp)
