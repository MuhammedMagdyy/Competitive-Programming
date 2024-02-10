class Solution {
public:
    int countSubstrings(string s) {
        vector<string> substrs;
        string substr;
        int valid = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                substr += s[j];
                substrs.push_back(substr);
            }
            substr = "";
        }

        for (auto& it: substrs) {
            substr = it;
            reverse(it.begin(), it.end());
            
            if (substr == it) {
                valid++;
            }
        }
        
        return valid;
    }
};