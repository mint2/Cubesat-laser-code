initialD = open('initialData.txt', 'r')
encodedD = open('encodedData', 'w')

dArr = []
for i in range(7):
  dArr.append(initialD.read(1))
  for j in range(3): #you can change 3 to something else if you need during testing
    for x in dArr:
      encodedD.write(x)
  dArr = []
initialD.close()
encodedD.close()