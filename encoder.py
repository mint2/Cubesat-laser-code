initialD = open('initialData.txt', 'r')
encodedD = open('encodedData', 'w')


#takes all the characters in the file and converts all of them into binary with bin(dec), then stores it back into initial
initial = initialD.read()
dec = int(initial, 16)
#converts all hexadecimal values into binary then converts that into string to be processed by the following code
initial = str(bin(dec))

dArr = []
ye = 1
for i in range(7):
  dArr.append(initial[i:(i+1)])
  #dArr.append(initialD.read(1))

  #sets initial to the substring of itself, basically removing the first 8 values every time so the for loop can work correctly
  initial = initial[8:]
  
  for j in range(3): #you can change 3 to something else if you need during testing
    for x in dArr:
      encodedD.write(x)
  dArr = []
initialD.close()
encodedD.close()
