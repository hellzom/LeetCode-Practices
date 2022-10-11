class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        // sort(nums.begin(),nums.end());
        // int size = nums.size();
        // for(int i=0; i<size;){
        //     int count = 1;
        //     for(int j=i+1;j<size;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //             ans.push_back(nums[i]);
        //         }
        //     }
        //     i = i+count;
        // }
        
 
        for (int i = 0; i < nums.size(); i++)
          {
           int index = abs(nums[i]) - 1;

           if (nums[index] < 0)
           {
            ans.push_back(index + 1);
           }
           else
           {
            nums[index] = -1 * nums[index];
           }
          }

  return ans;
    }
};