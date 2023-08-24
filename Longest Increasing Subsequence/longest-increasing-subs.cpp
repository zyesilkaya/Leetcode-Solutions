class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

    int i =0;
	int j=0;

    int n = nums.size();

    int arr[n];

    for(int i=0;i<n;i++) arr[i] = 1;

    for(int i=1;i<n;i++){
    	for(int j=0;j<i;j++){
    		if(nums[j] < nums[i]){
    			a rr[i] = max(arr[j]+1, arr[i]);
    		}
    	}	
    }

    int m=0;

    for(int i=0;i<n;i++) m = max(m,arr[i]);

    return m;	
        
    }
};