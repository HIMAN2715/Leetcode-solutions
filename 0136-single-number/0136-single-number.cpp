class Solution {
public:
    int singleNumber(vector<int>& nums) {
     unordered_map<int,int> freq ;
     int single ;
     for(auto x : nums){
        freq[x]++ ;
     }  
     for(auto p : freq){
        if(p.second==1){
            single=p.first ;
        }
     }
     return single ;
    }
};