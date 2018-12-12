# Append and Delete
# Problem : https://www.hackerrank.com/challenges/append-and-delete/problem

import math
import os
import random
import re
import sys

s = raw_input().strip()
t = raw_input().strip()
k = int(raw_input().strip())



com=0
ls= len(s)
lt= len(t)
while com < ls and com < lt and s[com] == t[com]:
	com+=1
todel=ls-com
toadd=lt-com
if k < todel+toadd:
	print("No")
elif (k-(todel+toadd))%2==0:
	print("Yes")
elif k >=ls+lt:
	print("Yes")
else:
	print("No")




