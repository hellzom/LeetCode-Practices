class Solution {
public:
    
    vector<int> merger(vector<int> v1,int m,vector<int> v2,int n){
    
    int n1 = m;
    int n2 = n;
    vector<int> ans(n1+n2);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            ans[k] = v1[i];
            k++;
            i++;
        }
        else{
            ans[k] = v2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        ans[k++] = v1[i++];
    }
    while(j<n2){
        ans[k++] = v2[j++];
    }

    return ans;
}
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int n1 = m;
    int n2 = n;
    vector<int> v1(nums1);
    vector<int> v2(nums2);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            nums1[k] = v1[i];
            k++;
            i++;
        }
        else{
            nums1[k] = v2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        nums1[k++] = v1[i++];
    }
    while(j<n2){
        nums1[k++] = v2[j++];
    }

    }
};