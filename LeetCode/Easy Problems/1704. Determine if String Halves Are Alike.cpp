class Solution {
public:
    bool isVowel(char& c) {
        return 
            c == 'a' or c == 'e' or c == 'o' or c == 'u' or c == 'i'
            or c == 'A' or c == 'E' or c == 'O' or c == 'U' or c == 'I';
    }

    bool halvesAreAlike(string s) {
        int n = s.size(), cnt_a = 0, cnt_b = 0;
        string a = s.substr(0, n / 2);
        string b = s.substr(n / 2, n);

        for (auto&it: a) {
            cnt_a += isVowel(it);
        }

        for (auto&it: b) {
            cnt_b += isVowel(it);
        }

        return cnt_a == cnt_b;
    }
};