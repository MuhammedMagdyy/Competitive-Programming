class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        ios::sync_with_stdio(false), cin.tie(nullptr);
        
        sort(nums.begin(), nums.end());
        long long sum = accumulate(nums.begin(), nums.end(), 0L);

        for (int i = nums.size() - 1; i >= 1; --i) {
            sum -= nums[i];

            if (nums[i] < sum) {
                return sum + nums[i];
            }
        }

        return -1;
    }
};