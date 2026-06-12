class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> answer ;
        for(auto x : nums){
            freq[x]++;
        }
        for(auto p : freq){
            if(p.second == 2){
                answer.push_back(p.first);
            }
        }
        return answer ;
    }
};