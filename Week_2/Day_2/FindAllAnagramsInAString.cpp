class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size()) {
            return ans;
        }

        vector<int> target(26, 0);
        vector<int> curr(26, 0);

        for (char ch : p) {
            target[ch - 'a']++;
        }

        int windowSize = p.size();

        for (int i = 0; i < windowSize; i++) {
            curr[s[i] - 'a']++;
        }

        if (curr == target) {
            ans.push_back(0);
        }

        for (int i = windowSize; i < s.size(); i++) {

            curr[s[i] - 'a']++;
            curr[s[i - windowSize] - 'a']--;

            if (curr == target) {
                ans.push_back(i - windowSize + 1);
            }
        }

        return ans;
    }
};
