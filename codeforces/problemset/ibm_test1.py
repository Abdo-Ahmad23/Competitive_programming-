#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'countMinimumOperations' function below.
#
# The function is expected to return a LONG_INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY price
#  2. INTEGER_ARRAY query
#
def prefix_sum(arr):
    prefix = [0] * len(arr)
    prefix[0] = arr[0]

    for i in range(1, len(arr)):
        prefix[i] = prefix[i - 1] + arr[i]

    return prefix
def find_first_ge(arr, target):
    left, right = 0, len(arr) - 1
    result = -1  

    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] > target:
            result = mid  
            right = mid - 1
        else:
            left = mid + 1

    return result

def countMinimumOperations(price, query):
    result=[]
    price=sorted(price)
    pre = prefix_sum(price)
    for i in query:
        if find_first_ge(price,i)!=-1 and find_first_ge(price,i)!=0:
            result.append(abs(i*find_first_ge(price,i)-pre[find_first_ge(price,i)-1])+abs(pre[-1]-pre[find_first_ge(price,i)-1]-i*(len(price)-find_first_ge(price,i))))
        else:
            result.append(abs(pre[-1]-i*len(price)))
    return result
            
        
    return pre
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    price_count = int(input().strip())

    price = []

    for _ in range(price_count):
        price_item = int(input().strip())
        price.append(price_item)

    query_count = int(input().strip())

    query = []

    for _ in range(query_count):
        query_item = int(input().strip())
        query.append(query_item)

    result = countMinimumOperations(price, query)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
