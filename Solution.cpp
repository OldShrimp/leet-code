// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size() != 0) {
            int big = arr.back();
            arr.back() = -1;
            for (auto i = arr.rbegin() + 1; i != arr.rend(); i++) {
                if (*i > big)
                    swap(*i, big);
                else {
                    *i = big;
                }
            }
        }
        return arr;
    }
};