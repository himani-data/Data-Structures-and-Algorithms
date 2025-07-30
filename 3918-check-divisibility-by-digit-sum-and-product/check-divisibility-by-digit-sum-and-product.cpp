class Solution {
public:
    bool checkDivisibility(int n) {
        int orig=n;
        int sum=0;
        int prod=1;
        while(n>0){
            
            int last=n%10;
            prod*=last;
        sum+=last;
            n=n/10;
        
        }
        int total = sum + prod;
    return (orig%total==0)&&(total!=0);
    }
};