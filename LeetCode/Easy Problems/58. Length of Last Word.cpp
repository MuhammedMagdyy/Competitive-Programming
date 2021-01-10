class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size(), ctn = 0;
        bool notSpace = true;
        for (int i = len - 1; i >= 0; --i) {
            if(s[i] != ' ') {
                ctn++;
                notSpace = false;
            }
            else if (!notSpace)
                break;
        }
        return ctn;
    }
};