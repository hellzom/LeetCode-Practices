class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //vector<int> ans;
        int size = nums.size();
        // for(int i=0;i<size;i++){
        //     if(nums[i]>nums[i+1]){
        //         int temp;
        //         temp = nums[i];
        //         nums[i] = nums[i+1];
        //         nums[i+1] = temp;
        //          break;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        sort(nums.begin(),nums.end());
        
        return nums;
    }
};