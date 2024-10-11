class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        s=''.join(sorted(s,reverse=True))
        if s.count('1'):
            return s[1:]+s[0]
        else:
            return s
