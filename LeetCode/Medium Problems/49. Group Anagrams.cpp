class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouping;
        vector<vector<string>> anagrams;

        for (auto& str: strs) {
            string word = str;
            sort(word.begin(), word.end());
            grouping[word].push_back(str);
        }

        for (auto& words: grouping) {
            anagrams.push_back(words.second);
        }

        return anagrams;
    }
};