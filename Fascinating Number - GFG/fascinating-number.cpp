//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
vector<int> v;
    void ins(int n){
	   int rem;
	   while(n!=0){
	       rem = n%10;
           
	       n /= 10;
        //   if(find(v.begin(), v.end(), rem) != v.end()){ 
        //     continue;
        //   }
        //   else{
            v.push_back(rem);
           
	   }
	}
	bool fascinating(int n) {
	    // code here
	    int m2 = n*2;
	    int m3 = n*3;
	    //cout<<n<<" "<<m2<<" "<<m3;
	    
	    ins(n);
	    ins(m2);
	    ins(m3);
	    sort(v.begin(),v.end());
	    for(int i=1;i<=9;i++){
            //cout<<"checking "<<i<<" v-> "<<v[i-1]<<endl;
	        if(v[i-1]==i){
	           continue;
	        }
	        return false;
	    }
        return true;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends