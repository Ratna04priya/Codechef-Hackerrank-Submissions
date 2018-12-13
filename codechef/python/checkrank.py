# Problem Statement : https://www.codechef.com/DEC18B/problems/CHFINTRO

def boi(j):
	if j < b:
		c.append(0)
	else:
		c.append(1)


a,b = raw_input().split()

a = int(a)
b = int(b)
c=[]
for i in range(0,a):
	j=int(input())
	boi(j)

for i in range(0,a):
	if c[i] == 0:
		print("Bad boi")
	else:
		print("Good boi")
