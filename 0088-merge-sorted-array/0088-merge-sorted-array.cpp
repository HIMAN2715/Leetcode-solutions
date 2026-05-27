class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int left=m;
        int right=0;
        while(left<nums1.size()){
            if(nums1[left]==0){
                nums1[left]=nums2[right];
                right++;
            }
            left++;

        }
        sort(nums1.begin(),nums1.end());
        return ;
        
    }
};