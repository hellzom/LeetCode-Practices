class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n = nums1.size();
        int m = nums2.size();
        
//         for(int i=0; i<n;i++){
//             int ele = nums1[i];
            
//             for(int j=0;j<m;j++){
//                 if(ele==nums2[j]){
                    
//                     ans.push_back(ele);
                    
//                     nums2[j] = INT_MAX;
//                     break;
//                 }
//             }
//         }
//         return ans;
        int arr[1001]={-1};
            for(int i=0;i<n;i++){
                arr[nums1[i]]=1;
            }
            for(int i=0;i<m;i++){
                //if element is present in array1 push to ans and make it -1 
                if(arr[nums2[i]]==1) {
                    ans.push_back(nums2[i]); 
                    arr[nums2[i]]=-1;
                }
            }
            return ans;
    }
};