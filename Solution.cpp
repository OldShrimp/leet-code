class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest_substring = 0;
        for (auto i = s.begin(); i != s.end(); i++) {
            auto subStringStart = i, subStringEnd = i;
            while (subStringEnd != s.end() && find(subStringStart, subStringEnd, *(subStringEnd)) == subStringEnd) {
                subStringEnd++;
            }
            longest_substring = max(longest_substring, static_cast<int>(distance(subStringStart, subStringEnd)));
        }
        return longest_substring;
    }
};