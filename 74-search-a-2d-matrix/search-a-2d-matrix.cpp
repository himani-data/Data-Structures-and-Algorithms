class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int  n=arr.size();
        for(int i=0;i<n;i++){
            int m = arr[i].size();
            for(int j=0;j<m;j++){
           if (arr[i][j]==target)   
           return true; 

            }
            // return (arr[i][j]==target);
        }
        return false;
    }
};