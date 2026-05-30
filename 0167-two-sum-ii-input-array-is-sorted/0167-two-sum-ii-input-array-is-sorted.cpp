class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        int sum =target ;
        while(left<=right){
            if(numbers[left]+numbers[right]>sum){
                right--;
            }
            if(numbers[left]+numbers[right]<sum){
                left++;
          
        }
        if(numbers[left]+numbers[right]==sum){
               return {left+1,right+1} ;
               }

    }
        return {};
    }
    
};