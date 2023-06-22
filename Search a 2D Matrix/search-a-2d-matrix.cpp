class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int o = matrix.size();
        int i=matrix[0].size();
        int r=i-1;
        int l=0;

        while(l<o && r>-1){
            cout<<l<<"  "<<r<<endl;
            int mid=(l+r)/2;
            if(matrix[l][r] == target) return true;
            else if(matrix[l][r] > target){
                cout<<matrix[l][r]<<endl;
                r--;
            }
            else if(matrix[l][r] < target){
                cout<<matrix[l][r]<<endl;
                l++;
            }

        }
        return false;
        
    }
};