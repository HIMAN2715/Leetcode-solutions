class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
      vector<int> pos ;
      vector<int> answer;
      
      for(int i=0;i<nums.size();i++){
        if(nums[i]==x){
            pos.push_back(i);
        }
      }
      int n = pos.size();
      for(int i=0;i<queries.size();i++){
         if(queries[i]>n){
            answer.push_back(-1);
         }
         else {
        answer.push_back(pos[queries[i] - 1]);
    }

      }
      return answer ;
      
    }
};