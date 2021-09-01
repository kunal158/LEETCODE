class Solution {
public:
    int maxSubArray(vector<int>& nums) {            //using kadanes's algo
        int sum = 0;
        int result = INT_MIN;
        
        for (int i : nums) {
            sum += i;
            result = max(result, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return result;
    }
};
