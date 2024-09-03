// https://leetcode.com/problems/reverse-string
class Solution {
public:
    void reverseString(vector<char>& s) {
        auto front_iter = s.begin();
        auto back_iter = s.end() - 1;
        while (front_iter < back_iter) {
            swap(*front_iter, *back_iter);
            front_iter++;
            back_iter--;
        }
    }
};