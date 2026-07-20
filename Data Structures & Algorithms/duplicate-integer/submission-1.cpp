class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       std::unordered_map<int, int> dict = {};
       for (auto i : nums) {
        if (dict.find(i) != dict.end()) {
            return true;
        } dict[i] += 1;
       } return false;
    }
};