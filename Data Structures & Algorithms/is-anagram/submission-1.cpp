class Solution {
public:
    bool isAnagram(string s, string t) {
        // map chars in s, compare to t
        unordered_map<char, int> dictS = {};
        unordered_map<char, int> dictT = {};
        for (auto l : s) {
            dictS[l] +=1;
        } for (auto l : t) {
            dictT[l] +=1;
        } if (dictS.size() != dictT.size()) {
            return false;
        } for (auto l : s) {
            if (dictS[l] != dictT[l]) {
                return false;
            }
        } return true;
        
    }
};
