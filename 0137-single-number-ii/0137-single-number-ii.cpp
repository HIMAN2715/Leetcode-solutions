class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq ;
        int single2 ;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto p : freq){
            if(p.second==1){
              single2=p.first ;
            }
        }
        return single2 ;
    }
};