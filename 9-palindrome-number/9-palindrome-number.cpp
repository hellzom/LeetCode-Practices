class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            int z = x;
            long long rev = 0;
            int rem;
            while(z){
                rem = z%10;
                rev = (rev*10) + rem;
                z = z/10;
            }
            if(rev==x){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};