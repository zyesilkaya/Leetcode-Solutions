class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub = nums[0];
        int cur = 0;
        for(int i = 0; i<nums.size();i++){
            cur = max(nums[i]+cur,nums[i]);
            maxSub = max(cur,maxSub);
        }
        return maxSub;
    }
};