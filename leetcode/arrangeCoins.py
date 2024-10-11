class Solution:
    def getSum(n):
        return ((1+n)*n)//2
    def arrangeCoins(self, n: int) -> int:
        l,r,mid=1,n,0
        while l<=r:
            mid=(l+r)>>1
            if Solution.getSum(mid)<=n:
                res=mid
                l=mid+1
            else:
                r=mid-1
        return res