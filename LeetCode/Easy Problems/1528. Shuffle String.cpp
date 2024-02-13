class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffledString;
        vector<pair<char, int>> process;

        for (int i = 0; i < s.size(); i++) {
            process.emplace_back(s[i], indices[i]);
        }

        sort(process.begin(), process.end(), 
            [](pair<char, int> &a, pair<char, int> &b) -> bool {
            return a.second < b.second;
        });

        for (auto& it: process) {
            shuffledString += it.first;
        }

        return shuffledString;
    }
};