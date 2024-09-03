// https://leetcode.com/problems/get-maximum-in-generated-array/
class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2)
            return n;

        int largest = 1;

        vector<int> vec;
        vec.reserve(n + 1);
        vec.push_back(0);
        vec.push_back(1);
        for (int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                vec.push_back(vec[i / 2]);
            }
            else {
                vec.push_back(vec[(i - 1) / 2] + vec[(i - 1) / 2 + 1]);
            }
            largest = max(largest, vec[i]);
        }
        return largest;
    }
};