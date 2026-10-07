class Solution {
public:
    int minOperations(vector<int>& nums) {
        //can be easily done using map
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        int count =0;
        for(auto p:map){

            if(p.second==1){
                return -1;
            }
            if((p.second)%3==0){
                count+=(p.second)/3;
            }
            if((p.second)%3==2||(p.second)%3==1){
                count+=(p.second)/3+1;
            }
           
        }
        return count;
    }
};