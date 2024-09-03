// https://leetcode.com/problems/find-the-number-of-good-pairs-i
class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int goodPairs = 0;
        for (auto& num1 : nums1)
            for (auto& num2 : nums2)
                goodPairs += static_cast<int>((num1 % (num2 * k)) == 0);
        return goodPairs;
    }
};