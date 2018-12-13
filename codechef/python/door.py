# Problem Statement : https://www.codechef.com/DEC18B/problems/CHFIDEAL

import random
a= random.randint(1,3)
if a in [1,2,3]:
	print(a)



h=True
b = int(input())
b in [1,2,3]

while(h==True):
	c = random.randint(1,3)
	if c in [1,2,3] and c != a and c !=b :
		print(c)
		h = False

'''print(3)
a=int(input())
if a == 2:
	print(1)
if a ==1:
	print(2)'''
