class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>intersection ;
        unordered_map<int,int> mp ;
        for(auto x : nums1){
            mp[x]++;
        }
        for(int i=0 ;i<nums2.size();i++){
           if(mp.count(nums2[i])){
                intersection.push_back(nums2[i]);
                mp.erase(nums2[i]) ;
            }
        }

        return intersection;
    }
};