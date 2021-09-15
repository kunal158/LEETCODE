class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& M) {
       
        vector<int> ans;
        if(M.size()==0)
             return ans;
        
        bool up=true;  //direction variable
        int i=0;
        int j=0;
        
        
        while(i<M.size() && j< M[0].size())
        {
             ans.push_back(M[i][j]);
            if(up)            
            {
                if(j==M[0].size()-1)                
                {
                    up=false;
                    i=i+1;
                }
                else if(i==0)                         
                {
                    up=false;
                    j=j+1;
                }
                else
                {
                    i=i-1;
                    j=j+1;
                }
                
            }
            else                                   
            {
                if(i==M.size()-1)               
                {
                    up=true;
                    j=j+1;
                }
                else if(j==0)                   
                {
                    up=true;
                    i=i+1;
                }
                else
                {
                    i=i+1;
                    j=j-1;
                }
            }
        }
        return ans;
        
    }
};
