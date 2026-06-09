class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        int count = 0;
        for (auto x : nums) {
            freq[x]++;
        }
        vector<pair<int, int>> v;

        for (auto p : freq) {
            v.push_back({p.second, p.first});
        }
        sort(v.rbegin(),v.rend());
         vector<int>ans;
         for(int i=0 ;i<k;i++){
            ans.push_back(v[i].second);
         }
         return ans;


    }



}
;