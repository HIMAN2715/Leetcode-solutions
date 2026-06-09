class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int k = n/2;
        unordered_map<int,int> freq;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto p : freq){
            if(p.second>k){
                return p.first ;
            }
        }
         
         return -1 ;

    }
};