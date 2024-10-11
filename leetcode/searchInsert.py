class Solution:
    def bs(arr, target):
        left, right = 0, len(arr) - 1
        result = -1  
        ok=0
        while left <= right:
            mid = left + (right - left) // 2
            
            if arr[mid] >= target:
                if arr[mid]==target:
                    ok=1
                result = mid 
                right = mid - 1  
            else:
                left = mid + 1  

        if ok:
            return result
        else:
            if result==-1:
                return len(arr)
            else:
                return result




    def searchInsert(self, nums: List[int], target: int) -> int:
        return Solution.bs(nums,target)