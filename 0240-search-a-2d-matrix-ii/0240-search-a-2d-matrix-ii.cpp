class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowi = 0;
        int coli = col-1;
        
        while(rowi<row && coli>=0){
            int ele = matrix[rowi][coli];
            if(ele==target){
                return 1;
            }
            else if(ele<target){
                rowi++;
            }
            else{
                coli--;
            }
        }
        return 0;
    }
};