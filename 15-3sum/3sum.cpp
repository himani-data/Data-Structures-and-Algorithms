class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        int  n=num.size();
        vector<vector<int>> ans;
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            if(i>0 && num[i]==num[i-1]) continue;
            int j=i+1;
            int k=n-1;
              while(j<k){
            int sum=num[i]+num[j]+num[k];
            
            if(sum<0){
                j++;}
                else if(sum>0){
                    k--;
            }
            else{
                 ans.push_back({num[i],num[j],num[k]});
                 j++;
                 k--;
                 while(j<k && num[j]==num[j-1])
                 j++;

            

        }}
    } 
    return ans;} 
};