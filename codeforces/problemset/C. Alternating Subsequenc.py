t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    sum, i = 0, 0
    while i < n:
        mx = a[i]
        j = i
        while j < n and a[i] * a[j] > 0:
            mx = max(mx, a[j])
            j += 1
        sum += mx
        i = j
    
    print(sum)
