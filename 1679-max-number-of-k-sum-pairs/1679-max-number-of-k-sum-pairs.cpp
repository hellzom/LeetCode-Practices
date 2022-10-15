class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        // long long int z;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<=nums.size();j++){
        //         //z = nums[i]+nums[j];
        //         if(k-nums[i]==nums[j]){
        //             count++;
        //             //nums[i] = -1000;
        //             //nums[j] = -1000;
        //             break;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        int s = 0;
        int e = nums.size()-1;
        while(s<e){
            if(nums[s]+nums[e]==k){
                s++;
                e--;
                count++;
            }
            else if(nums[s]+nums[e]>k){
                e--;
            }
            else{
                s++;
            }
        }
        return count;
    }
};