xxd -r filename.spe > bin
xxd -r imageFile.spe > imBin

filePath = "/path/to/image/files/"

i = 0

for file in $filePath
do
	let i=i+1
	xxd -r 	image+=i > imBin+=i
done

filePath = "/path/to/spectrometer/files/"

i = 0

for file in $filePath
do
	let i=i+1
	xxd -r 	data+=i > specBin+=i
done

#Run conversion script for python