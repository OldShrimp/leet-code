// https://leetcode.com/problems/fizz-buzz
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n, "");
        for (int i = 1; i <= n; i++) {
            bool isFizz = (i % 3) == 0;
            bool isBuzz = (i % 5) == 0;
            if (!isFizz && !isBuzz)
                answer[i - 1] = to_string(i);
            else {
                string fizz[] = { "", "Fizz" };
                string buzz[] = { "", "Buzz" };
                answer[i - 1] = fizz[isFizz] + buzz[isBuzz];
            }
        }
        return answer;
    }
};