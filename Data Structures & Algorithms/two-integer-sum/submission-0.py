class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        

        # O(n) time complexity?
        solMap = {}
        for i, n in enumerate(nums):
            diff = target - n
            if diff in solMap:
                return [solMap[diff], i]
            solMap[n] = i
        return
