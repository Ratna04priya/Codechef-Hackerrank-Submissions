
from __future__ import print_function
def findZigZagSequence(a, n):
    a.sort()
    mid = int(((n-1) + 1)/2)
    a[mid], a[n-1] = a[n-1], a[mid]

    st = mid + 1
    ed = n - 1
    while(st <= ed):
        if a[st] > a[ed]:
            ed = ed -  1
        
        if a[st]< [ed]:
            a[st], a[ed] = a[ed], a[st]
            st = st + 1

    for i in range (n):
        if i == n-1:
            print(a[i])
            break
           
        else:
            print(a[i], end = ' ')
    return

test_cases = int(raw_input())
for cs in range (test_cases):
    n = int(raw_input())
    a = list(map(int, raw_input().split()))
    findZigZagSequence(a, n)




