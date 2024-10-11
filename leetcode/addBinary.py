class Solution:
    def toInt(s):
        sum=0
        for i in range(len(s)):
            sum+=2**(len(s)-i-1)*(ord(s[i])-ord('0'))
        return sum
    def toBinary(n):
        s=''
        while n>0:
            s+=chr(n%2)
            n//=2
        
    def addBinary(self, a: str, b: str) -> str:
        return bin(Solution.toInt(a)+Solution.toInt(b))[2:]