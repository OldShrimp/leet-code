// https://leetcode.com/problems/sum-of-square-numbers
class Solution {
public:
    bool judgeSquareSum(int c) {
        for (unsigned int i = 0; i * i <= c; i++) {
            auto x = sqrt(c - i * i);
            if (trunc(x) == x)
                return true;
        }
        return false;
    }
};