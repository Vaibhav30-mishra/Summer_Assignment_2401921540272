class Solution {
public:
    int compress(vector<char>& chars) {

        int writeIndex = 0;
        int i = 0;

        while (i < chars.size()) {

            char currentChar = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == currentChar) {
                count++;
                i++;
            }

            chars[writeIndex++] = currentChar;

            if (count > 1) {

                string frequency = to_string(count);

                for (char digit : frequency) {
                    chars[writeIndex++] = digit;
                }
            }
        }

        return writeIndex;
    }
};
