class Solution {
public:
    int countPrimes(int n) {
        // sieve rule
        int count = 0;
        vector<bool> v(n+1,true);
        for(int i=2;i<n;i++){
            if(v[i]){
                count++;
                for(int j=i*2;j<n;j+=i){
                    v[j] = false;
                }
            }
        }
        return count;
    }
};