// https://leetcode.com/problems/bitwise-xor-of-all-pairings/
class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int XOR_ALL = 0;

        if (nums2.size() % 2 != 0)
            for (auto& n1 : nums1)
                XOR_ALL ^= n1;
        if (nums1.size() % 2 != 0)
            for (auto& n2 : nums2)
                XOR_ALL ^= n2;

        return XOR_ALL;
    }
};