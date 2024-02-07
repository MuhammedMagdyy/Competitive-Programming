class Solution {
public:
    string frequencySort(string s) {
        map<char, int> freq;
        vector<pair<char, int>> vip;
        string ans;
        
        for (auto& it: s) { freq[it]++; }

        for (auto& it: freq) { vip.emplace_back(it.first, it.second); }
        
        sort(vip.begin(), vip.end(), 
            [](pair<char, int> &a, pair<char, int> &b) -> bool {
                return a.second > b.second;
        });

        for (auto& it: vip) { 
            for (int i = 0; i < it.second; i++) {
                ans += it.first;
            }
        }

        return ans;
    }
};