// https://leetcode.com/problems/find-the-number-of-good-pairs-ii
class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long goodPairs = 0;
        unordered_map<int, int> frequency;
        for (auto& n : nums2) frequency[n * k]++;
        for (auto& num1 : nums1) {
            if ((num1 % k) == 0)
            {
                for (int i = 1; i * i <= num1; i++)
                    if ((num1 % i) == 0) {
                        goodPairs += frequency[i];
                        if (i != num1 / i)
                            goodPairs += frequency[num1 / i];
                    }
            }
        }
        return goodPairs;
    }
};