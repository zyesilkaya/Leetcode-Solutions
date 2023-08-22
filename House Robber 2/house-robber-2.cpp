class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0;
        int prev2=0;
        int result1=0;
        int result2=0;

        if(nums.size() == 1){
            return nums[0];
        }

        for(int i=0;i<nums.size()-1;i++){
            result1 = max(prev1+nums[i], prev2);
            prev1 = prev2;
            prev2= result1;
        }

        prev1 = 0;
        prev2 = 0;

        for(int i=1;i<nums.size();i++){
            result2 = max(prev1+nums[i], prev2);
            prev1 = prev2;
            prev2= result2;
        }

        return max(result1,result2);
    }
};