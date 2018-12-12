#Time in words
# Conversion of time into words

import inflect

n=int(input())
m=int(input())
p = inflect.engine()
# print(p.number_to_words(n))

if m == 00:
	print(p.number_to_words(n)+" o' clock")
if m > 0 and m < 15:
	print(p.number_to_words(m)+" minutes past "+p.number_to_words(n))
if m == 15:
	print("quarter past "+p.number_to_words(n))
if m >15 and m<30:
	print(p.number_to_words(m)+" minutes past "+p.number_to_words(n))
if m == 30:
	print("half past "+p.number_to_words(n))
if m > 30 and m < 45:
	print(p.number_to_words(60-m)+" minutes to "+p.number_to_words(n+1))
if m == 45:
	print("quarter to "+p.number_to_words(n+1))
if m > 45 and m<= 59:
	print(p.number_to_words(60-m)+" minutes to "+p.number_to_words(n+1))

