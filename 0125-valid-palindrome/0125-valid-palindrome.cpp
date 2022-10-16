class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        int start = 0;
        int end = s.length()-1;
        string ans = s;
        
        while(start<end){
            //to check if start pointer hits any faltu character
            if((s[start]>= 'a' && s[start]<= 'z') || (s[start]>='0' && s[start]<='9')){
                
                //to check if end pointer hits any faltu character
                if((s[end]>= 'a' && s[end]<= 'z') || (s[end]>='0' && s[end]<='9')){
                    swap(s[start++],s[end--]);
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        
        //checking reverse with original
        if(s==ans){
            return 1;
        }
        return false;
    }
};