class Solution {
public:
int p1=0;
int p2=0;
int getmin(vector<int>& num1, vector<int>& num2){
    if(p1<num1.size()&&p2<num2.size()){
        return num1[p1]<num2[p2]? num1[p1++]:num2[p2++];
    }
     else if(p1<num1.size()){
        return num1[p1++];

     }
     else if(p2<num2.size()){
        return num2[p2++];
}return -1;
}
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        //using merge sort
      int n=int(num1.size());
      int m=int(num2.size());
      int total=m+n;
      if(total%2==0){
        for(int i=0;i<total/2-1;++i){
        //discard left half till mid 1{
            int temp=getmin(num1,num2);
        }
          return (double) (getmin(num1,num2)+getmin(num1,num2))/2;
      }
      else {
        for(int i=0;i<total/2;++i){
            int temp=getmin(num1,num2);
        }
        return getmin(num1,num2);}
        return -1;
      
      

    }
};