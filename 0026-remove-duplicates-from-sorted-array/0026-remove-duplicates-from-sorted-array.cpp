class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int size = nums.size();        
        return nums.size();
    }
};