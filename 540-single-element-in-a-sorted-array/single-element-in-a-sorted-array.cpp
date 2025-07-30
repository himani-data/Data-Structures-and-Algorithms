class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int st=0;
        int end=arr.size()-1;
        int n=arr.size();
        if(arr.size()==1){
            return arr[0];
        }

while(st<=end){
    int mid=st+(end-st)/2;
    if(mid==0&&arr[mid]!=arr[mid+1]) return arr[0];
    if(mid==n-1&&arr[mid]!=arr[mid-1]) return arr[n-1];
  
    if(arr[mid]!=arr[mid-1]&&arr[mid]!=arr[mid+1])return arr[mid];


 if(mid%2==0){
    if(arr[mid]==arr[mid-1]){
        end=mid-1;
    }
    else st=mid+1;

}
else {
    if(arr[mid]==arr[mid-1]){
        st=mid+1;
    }
    else {end=mid-1;}
}

}
return -1;}
    

};