class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums);
        
        
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
        
        //to copy temp to nums
        nums = temp;
    }
};