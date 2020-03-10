receiveD = open('receivedData.txt', 'r')
finalD = open('finalData.txt', 'w')

majority = []
temp = []
size = receiveD.seek()
receiveD.seek(0)
while receiveD.tell() < size:
  for i in range(3):
    for j in range(8):
      temp.append(receiveD.read(1))
    majority.append(temp)
  temp = []
  
  maj1 = 0
  for k in range(8):
    for p in range(3):
      if majority[k][p] == 1:
        maj1 += 1
  if maj1 > 1:
    finalD.append(1)
  else:
    finalD.append(0)
      #may need to flip p and k


receiveD.close()
finalD.close()