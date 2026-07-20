class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        # loop over nums, if nums[i] not in set, add, continue. if is in map, return true
        val_seen = set()
        for n in nums:
            if n in val_seen:
                return True
            val_seen.add(n)
        return False