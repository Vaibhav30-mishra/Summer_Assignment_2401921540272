class Solution {
public:

    int startIndex = 0;
    int longestLength = 1;

    void expandAroundCenter(string &s, int left, int right) {

        while (left >= 0 &&
               right < s.size() &&
               s[left] == s[right]) {

            int currentLength = right - left + 1;

            if (currentLength > longestLength) {
                longestLength = currentLength;
                startIndex = left;
            }

            left--;
            right++;
        }
    }

    string longestPalindrome(string s) {

        if (s.length() <= 1) {
            return s;
        }

        for (int i = 0; i < s.length(); i++) {

            expandAroundCenter(s, i, i);

            expandAroundCenter(s, i, i + 1);
        }

        return s.substr(startIndex, longestLength);
    }
};
