class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int current_area=0;
        int left =0 ;
        int right=height.size()-1;
        while(left<right){
            current_area=(right-left) * min(height[left],height[right]);
            maxArea=max(maxArea , current_area);
            if(height[left]<height[right]){
                left++;
            }
            else
            right--;


        }
        return maxArea ;
    }
};