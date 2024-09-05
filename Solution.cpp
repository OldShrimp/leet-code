// https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        string strx = to_string(x);
        auto l = strx.begin(), r = strx.end() - 1;
        if (*l == '-')
            l++;
        while (l < r) {
            swap(*l, *r);
            l++;
            r--;
        }
        l = strx.begin();
        if (*l == '-')
            l++;
        while (*l == '0') {
            strx.erase(l);
        }
        int answer = atoi(strx.c_str());
        if (strx.compare(to_string(answer)) != 0)
            return 0;
        return answer;
    }
};
