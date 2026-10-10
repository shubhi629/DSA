class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=magazine.length();
        unordered_map<char,int>mp1;
        for(int i:magazine){
            mp1[i]++;
        }
        //similarly for ransomnote;
        unordered_map<char,int>mp2;
        for(int i:ransomNote){
            mp2[i]++;
        }
        //comparing freq
        for(auto i:mp2){
            if(mp2.find(i.first) == mp1.end() || mp2[i.first]>mp1[i.first]){
                return false;
            }
        }
        return true;
    }
};