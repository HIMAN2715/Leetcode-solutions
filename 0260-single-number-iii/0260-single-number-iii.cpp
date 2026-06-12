class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq ;
        vector<int> single3 ;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto p : freq){
            if(p.second==1){
                single3.push_back(p.first);
            }
        }
        return single3 ;
    }
};