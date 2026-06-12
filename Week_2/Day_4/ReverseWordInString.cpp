class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string answer = "";

        for (int i = 0; i < s.length(); i++) {

            if (s[i] != ' ') {
                word += s[i];
            }
            else {
                reverse(word.begin(), word.end());
                answer += word;
                answer += ' ';
                word = "";
            }
        }

        reverse(word.begin(), word.end());
        answer += word;

        return answer;
    }
};
