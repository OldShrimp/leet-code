// https://leetcode.com/problems/zigzag-conversion/
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 0)
            return "";
        if (numRows == 1)
            return s;
        vector<string> rows(numRows, string(""));
        string spaced_str, spaces(numRows - 2, ' ');
        if (numRows == 2) {
            spaced_str = s;
        }
        else {
            for (int i = 0; i < s.length(); i++) {
                spaced_str += s[i];
                if (i % (2 * numRows - 2) >= numRows - 1) {
                    spaced_str += spaces;
                }
            }
        }

        for (int i = 0; i < spaced_str.length(); i++) {
            rows[i % numRows] += spaced_str[i];
        }
        string converted = "";
        for (auto& str : rows) {
            cout << str << endl;
            str.erase(remove(str.begin(), str.end(), ' '), str.end());
            converted += str;
        }
        return converted;
    }
};