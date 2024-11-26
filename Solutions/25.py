counter = 2
ant_ant = 1
ant = 1
number = 1

while len(str(number)) != 1000:
    number = ant + ant_ant
    ant_ant = ant
    ant = number
    counter+=1

print(counter)