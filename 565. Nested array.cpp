class Solution {
    public:
        int arrayNesting(vector < int > & nums) {
            int result = 0;
            for (int i = 0; i < nums.size(); i++) {
                int j = i, count = 0;
                while (j < nums.size() && nums[j] >= 0) {
                    int temp = j;
                    count++;
                    j = nums[j];
                    nums[temp] = -1;
                }
                result = max(result, count);
            }
            return result;
        }
};

/*another interesting sol.
#define vi vector<int>
#define vb vector<bool>

class Solution {
public:

    int arrayNesting(vi &nums) {
        int mlen=0, n = nums.size(), curr, clen; 
        vb visited(n, false);  
        
        for (int i=0; i < n; i++) {
            curr = i; clen = 0; 
            while ( !visited[curr]) {
                visited[curr] = true; 
                mlen = max(mlen, ++clen); 
                curr = nums[curr]; 
            }
        }
        
        return mlen; 
    }
};             */
