class Solution:
    def pivotInteger(self, n: int) -> int:
        pre=list((range(0,n+1)))
        # for i in range(0,n+1):
        #     pre[i]=i
        for i in range(1,n+1):
            pre[i]+=pre[i-1]
        for i in range(1,n+1):
            if pre[n]-pre[i-1]==pre[i]-pre[0]:
                return i
        return -1