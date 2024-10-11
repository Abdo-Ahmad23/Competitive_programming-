class Solution:
    def sumOfTheDigitsOfHarshadNumber(self, x: int) -> int:
        s=sum(int(i) for i in str(x))
        if x%s:
            return -1
        else:
            return s