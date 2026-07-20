class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* loop over vector
        add to hashmap
        loop through hashmap
        if target - map[i] in map, return
        */
        unordered_map<int, int> umap {};
        int i1, i2;
        for (int i = 0; i < nums.size(); ++i) {
            umap[nums[i]] = i;
        } for (int i = 0; i < nums.size(); ++i) {
            if (umap.contains(target - nums[i]) && umap[target - nums[i]] != i) {
                i1 = i;
                i2 = umap[target - nums[i]];
                break;
            }
        } return {i1, i2};

    }
};
