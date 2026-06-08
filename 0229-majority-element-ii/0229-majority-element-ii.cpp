class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result ;
        int n = nums.size();
        unordered_map<int,int> freq;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto p:freq){
            if(p.second>n/3){
                result.push_back(p.first);
            }
        }
        return result ;
    }
};