#!/bin/python3

import sys

def bonAppetit(n, k, b, ar):
    tsum=0
    for i in range(n):
        tsum+=ar[i]

    tsum-=ar[k]
   
    tcost=tsum//2
    if tcost==b:
        return('Bon Appetit')
    else:
        return(b-tcost)# Complete this function

n, k = input().strip().split(' ')
n, k = [int(n), int(k)]
ar = list(map(int, input().strip().split(' ')))
b = int(input().strip())
result = bonAppetit(n, k, b, ar)
print(result)
