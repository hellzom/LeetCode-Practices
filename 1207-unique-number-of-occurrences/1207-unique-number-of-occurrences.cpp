class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        
        sort(arr.begin(),arr.end());
        int size = arr.size();

        for(int i=0;i<size;){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            i=i+count;
                    ans.push_back(count);

        }
        
        int ansize = ans.size();
        sort(ans.begin(),ans.end());
        for(int i=0;i<ansize;i++){
            for(int j=i+1;j<ansize;j++){
                if(ans[i]==ans[j]){
                    return false;
                }
            }
        }
        return true;
    }
};