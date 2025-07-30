class Solution {
public:
    int maxArea(vector<int>& arr) {
        int p1=0;
        int p2=arr.size()-1;
        int maxm=0;
        while(p1<p2){
            int w=p2-p1;
            int ht=min(arr[p1],arr[p2]);

            int cap=ht*w;
            maxm=max(cap,maxm);
            arr[p1]<arr[p2]?p1++:p2--;
                    }
        
    
    return maxm;
}
};