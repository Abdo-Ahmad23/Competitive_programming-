import math
t=int(input())

while(t>0):
    n=int(input())
    array=list(map(int,input().split()))
    pos_array=[]
    neg_array=[]
    for i in range(len(array)):
        if array[i]>0:
            pos_array.append(array[i])
        else:
            neg_array.append(array[i])
    pos_array = sorted(pos_array, reverse=True)
    neg_array = sorted(neg_array, reverse=False)
    mn=min(len(pos_array),len(neg_array))
    if mn>0:
        sum=0
        for i in range(mn):
            sum+=pos_array[i]+neg_array[i]
        print(sum)
    else:
        if len(pos_array)==0:
            print(neg_array[len(neg_array)-1])
        else:
            print(pos_array[0])





    t-=1

 