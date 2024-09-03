// https://leetcode.com/problems/string-compression-iii
class Solution {
public:
    string compressedString(string word) {
        string comp;
        auto first = word.begin(), last = word.begin();
        while (first != word.end()) {
            while (last != word.end() && *first == *last && last - first < 9)
                last++;
            comp.push_back('0' + (last - first));
            comp.push_back(*first);
            first = last;
        }
        return comp;
    }
};