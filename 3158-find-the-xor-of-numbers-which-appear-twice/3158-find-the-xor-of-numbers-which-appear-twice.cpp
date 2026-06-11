class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> freq;
        int XOR=0;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto p: freq ){
            if(p.second==2){
                XOR=XOR^p.first ;
            }
        }
        return XOR ;
    }
};