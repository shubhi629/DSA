class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int>sum;
        for(int i=0;i<tasks.size();i++){
            sum.push_back(tasks[i][0]+tasks[i][1]);
        }
        sort(sum.begin(),sum.end());
        return sum[0];

    }
};