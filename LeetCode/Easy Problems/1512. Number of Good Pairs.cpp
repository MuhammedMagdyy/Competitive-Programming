class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ctnGood = 0;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] == nums[j] && i < j) {
                    ctnGood++;
                }
            }
        }
        return ctnGood;
    }
};