import math 
import array
resp = 0

cont = 0
for n in range(1,101):
    for r in range(1,n):
        cont=math.factorial(n)/(math.factorial(r)*(math.factorial(n-r)))
        if cont > 1000000 :
            resp += 1
            
print(resp)