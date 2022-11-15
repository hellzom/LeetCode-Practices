class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        //TLE
        // for(int i=0;i<size;i++){
        //     for(int j=i+1;j<size;j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++){
            if(i==size-1) return false;
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};