class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter ;
        unordered_map<int,int> mp ;
        unordered_map<int,int> mp2 ;
        for(auto x: nums1){
            mp[x]++;
        }
        for(auto p : nums2){
            mp2[p]++ ;
        }
        for(auto y : mp){
            if(mp2.count(y.first)){
                 int times = min(y.second, mp2[y.first]);

                for (int i = 0; i < times; i++) {
                    inter.push_back(y.first);
                }
                }
            }
        
        return inter ;
    }
};