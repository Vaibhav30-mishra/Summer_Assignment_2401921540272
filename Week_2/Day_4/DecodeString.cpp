class Solution {
public:
    string decodeString(string s) {

        stack<int> countStack;
        stack<string> stringStack;

        string currentString = "";
        int currentNumber = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                currentNumber = currentNumber * 10 + (ch - '0');
            }

            else if (ch == '[') {
                countStack.push(currentNumber);
                stringStack.push(currentString);

                currentNumber = 0;
                currentString = "";
            }

            else if (ch == ']') {

                int repeat = countStack.top();
                countStack.pop();

                string previous = stringStack.top();
                stringStack.pop();

                string expanded = "";

                while (repeat--) {
                    expanded += currentString;
                }

                currentString = previous + expanded;
            }

            else {
                currentString += ch;
            }
        }

        return currentString;
    }
};
