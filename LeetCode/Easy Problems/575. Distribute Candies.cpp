class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        set<int> candies;

        for (auto &it: candyType) {
            candies.insert(it);
        }

        return min(candyType.size() / 2, candies.size());
    }
};