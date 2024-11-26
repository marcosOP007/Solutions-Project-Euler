number = 1
string = ''
resp = 0

for i in range(1,101):
    number *= i

string = str(number)

for i in string:
    resp += int(i)

print(resp)