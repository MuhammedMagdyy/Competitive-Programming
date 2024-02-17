class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        ios::sync_with_stdio(false), cin.tie(nullptr);

        map<int, int> freq;
        vector<int> seconds;
        int ans = 0;

        for (auto& it: arr) { freq[it]++; }

        for (auto& it: freq) { seconds.push_back(it.second); }

        sort(seconds.begin(), seconds.end());

        for (int i = 0; i < seconds.size(); i++) {
            if (seconds[i] > k) break;
            k -= seconds[i];
            ans++;
        }

        return freq.size() - ans;
    }
};