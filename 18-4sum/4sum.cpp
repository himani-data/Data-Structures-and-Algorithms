class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int tar) {
        sort(arr.begin(), arr.end());

       vector<vector<int>> result;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
    if(j > i + 1 && arr[j] == arr[j-1]) continue;
            int p=j+1;
            int q=n-1;
            while(p<q){
                long long sum=(long long)arr[i]+(long long)arr[j]
                +(long long)arr[p]+(long long)arr[q];

                if(sum<tar){
                    p++;
                }
                else if(sum>tar){
                    q--;
                }
                else{
                    result.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++;q--;
                    while(p<q && arr[p]==arr[p-1]) p++;
                }
            }
            

        }
                     
    }  
    return result;
    }
};