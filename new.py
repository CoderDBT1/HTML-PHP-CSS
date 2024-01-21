#easy3
cp = int(input('Enter The Price Of Your Bike: '))
if (cp>100000):
 cp1 = cp+(cp*0.15)
 print('Total after tax price:-' ,cp1)
elif (cp>50000 and cp<=100000):
 cp2 = cp+(cp*0.10)
 print('Total after tax price:-',cp2)
elif cp<= 50000:
 cp3 = cp+(cp*0.05)
 print('Total after tax price:-',cp3)
else:
 print('Invalid Syntax')


