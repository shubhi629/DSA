class Solution {
public:
    int nthUglyNumber(int n) {
        int i2,i3,i5;
        vector<int>t(n+1);
        //t[i]=ith ugly number
        i2=i3=i5=1; //pointing to 1st ugly number
        //1st ugly number is 1
        t[1]=1;
        for(int i=2;i<=n;i++){
            int i2_ugly=t[i2]*2;
            int i3_ugly=t[i3]*3;
            int i5_ugly=t[i5]*5;
            int min_ugly=min({i2_ugly,i3_ugly,i5_ugly});
            t[i]=min_ugly;
            //jiska min hua , uska pointer ko increase krte h 
            if(min_ugly==i2_ugly){
                i2++;
            }
            if(min_ugly==i3_ugly){
                i3++;
            }
            if(min_ugly==i5_ugly){
                i5++;
            }
            //not used else if , bcoz 2 pointers can point to same no. too, so both have to increment 
        }
        return t[n];//nth ugly number
    }
};