class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for (int i=0;i<nums.size();i++){
            res = res ^ i;
            res = res ^ nums[i];
        }
        return res ^ nums.size();
    }
};
//can be done with cyclic sort too
