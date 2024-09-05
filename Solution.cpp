// https://leetcode.com/problems/longest-palindromic-substring
class Solution {
public:
    string longestPalindrome(string s) {
        string longest_palindrome = "";
        for (int i = 0; i < s.length(); i++) {
            auto leftIter = s.begin() + i;
            auto rightIter = leftIter;
            while (*leftIter == *rightIter) {
                string palindrome(leftIter, rightIter + 1);
                if (palindrome.length() > longest_palindrome.length())
                    longest_palindrome = palindrome;

                if (leftIter == s.begin() || rightIter == s.end() - 1)
                    break;
                --leftIter;
                ++rightIter;
            }
            leftIter = s.begin() + i;
            rightIter = leftIter + 1;
            if (rightIter != s.end()) {
                while (*leftIter == *rightIter) {
                    string palindrome(leftIter, rightIter + 1);
                    if (palindrome.length() > longest_palindrome.length())
                        longest_palindrome = palindrome;

                    if (leftIter == s.begin() || rightIter == s.end() - 1)
                        break;
                    --leftIter;
                    ++rightIter;
                }
            }
        }
        return longest_palindrome;
    }
};