class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n = mat.size();                //defining rows
        int m = mat[0].size();             //defining col
        vector<vector<int>> ans (m, vector<int>(n));          //another 2-D matrix
        for (int i = 0; i < n;i++){
            for (int j=0;j<m;j++){
                ans[j][i] = mat[i][j];
            }
        }
        return ans;
    }
};
