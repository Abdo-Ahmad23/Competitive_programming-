class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        list1=' '.join([str(i) for i in nums]).split()
        sum1=sum(int(i) for i in list1)
        list1 = ''.join(list1)
        sum2 = sum(int(i) for i in list1)
        return abs(sum1-sum2)