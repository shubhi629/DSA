class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int a=n;
        while(a>0){
            int last_digit=a%10;
            sum+=last_digit;
            product*=last_digit;
            a=a/10;
        }
        int net_sum=sum+product;
        if(n%net_sum==0){
            return true;
        }
        else{
            return false;
        }
    }
};