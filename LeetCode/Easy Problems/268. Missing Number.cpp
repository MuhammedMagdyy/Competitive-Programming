class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false), cin.tie(nullptr);
        
        vector<bool> here(nums.size() + 1, false); 

        for (int i = 0; i < nums.size(); i++) {
            here[nums[i]] = true;
        }

        for (int i = 0; i < here.size(); i++) {
            if (!here[i]) {
                return i; 
            }
        }

        return -1;
    }
};