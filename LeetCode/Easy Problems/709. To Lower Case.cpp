class Solution {
public:
    string toLowerCase(string str) {
        int len = str.size();
        for (int i = 0; i < len; ++i) {
            if(isupper(str[i])) {
                str[i] += 32;
            }
        }
        return str;
    }
};