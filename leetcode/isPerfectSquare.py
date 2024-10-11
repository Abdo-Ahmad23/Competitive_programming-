class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        l,r,res=1,num,0
        while l<=r:
            mid=(l+r)>>1
            if mid*mid==num:
                res=mid
                break
            elif mid*mid>num:
                r=mid-1
            else:
                l=mid+1
        return res