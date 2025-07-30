class Solution {
public:
    int findPeakElement(vector<int>& arr) {

        if(arr.size() == 1) return 0; // single element
        
        int n = arr.size();
        
		// check if 0th/n-1th index is the peak element
        if(arr[0] > arr[1]) return 0;
        if(arr[n-1] > arr[n-2]) return n-1;
        int st=1;
        int end=arr.size()-1;
        while(st<end){
            int mid= st+(end-st)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return st;
    }
};