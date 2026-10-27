class Solution {
public:
    int minRotations(string s) {
        int rotations=0;
        int n=s.length();
        int i=0;
         int prev=0;
        while(i<n){
            int curr = s[i] - '0';
            rotations+=min(abs(curr-prev),10-(abs(curr-prev)));
            prev=curr;
            i++;
        }
        return rotations;

    }
};