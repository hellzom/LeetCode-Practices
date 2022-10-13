class Solution {
public:
    
//     int firstOccur(vector<int> arr,int ele){
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s+(e-s)/2;
//         int ans = -1;
//         while(s<=e){
//             if(arr[mid]==ele){
//                 ans = mid;
//                 e = mid-1;
//             }
//             else if(ele>arr[mid]){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
//         }
//     return ans;
//     }

//     int lastOccur(vector<int> arr,int ele){
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s+(e-s)/2;
//         int ans = -1;
//         while(s<=e){
//             if(arr[mid]==ele){
//                 ans = mid;
//                 s = mid+1;
//             }
//             else if(ele>arr[mid]){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
//         }
//         return ans;
//     }
    vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> re;
//         int s = 0;
//         int e = arr.size()-1;
//         int mid = s+(e-s)/2;
//         int ans = -1;
//         while(s<=e){
//             if(arr[mid]==ele){
//                 ans = mid;
//                 e = mid-1;
//             }
//             else if(ele>arr[mid]){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
//         }
//         re.push_back(ans);
//         while(s<=e){
//             if(arr[mid]==ele){
//                 ans = mid;
//                 s = mid+1;
//             }
//             else if(ele>arr[mid]){
//                 s = mid+1;
//             }
//             else{
//                 e = mid-1;
//             }
//         }
//                 re.push_back(ans);

        
//         // re.push_back(firstOccur(nums,target));
//         // re.push_back(lastOccur(nums,target));
//         return re; 
        
        vector<int> ans(2, -1);
        int start = 0, end = (int)nums.size() - 1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] < target) start = mid+1;
            else {
                if(nums[mid] == target) ans[0] = mid;
                end = mid-1;
            }
        }
        start = 0, end = (int)nums.size() - 1;
        while(start <= end) {
            int mid = start + (end-start)/2;
            if(nums[mid] > target) end = mid-1;
            else {
                if(nums[mid] == target) ans[1] = mid;
                start = mid+1;
            }
        }
        return ans;
    }
};