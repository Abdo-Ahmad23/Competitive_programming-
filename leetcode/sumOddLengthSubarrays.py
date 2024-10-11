class Solution:
    def get_all_subarrays(arr):
        n = len(arr)
        subarrays = []
        
        # Iterate over all possible starting points
        for i in range(n):
            # Iterate over all possible ending points
            for j in range(i, n):
                # Extract the subarray from index i to j (inclusive)
                subarray = arr[i:j + 1]
                subarrays.append(subarray)
        
        return subarrays
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        allSubs=Solution.get_all_subarrays(arr)
        sum1=0
        for i in allSubs:
            if len(i)%2:
                sum1+=sum(int(j) for j in i)
        return sum1
