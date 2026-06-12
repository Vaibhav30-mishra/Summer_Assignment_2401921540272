class Solution {
public:

    vector<string> result;

    void generate(int open, int close, string current) {

        if (open == 0 && close == 0) {
            result.push_back(current);
            return;
        }

        if (open > 0) {
            generate(open - 1, close, current + "(");
        }

        if (close > open) {
            generate(open, close - 1, current + ")");
        }
    }

    vector<string> generateParenthesis(int n) {

        generate(n, n, "");

        return result;
    }
};
