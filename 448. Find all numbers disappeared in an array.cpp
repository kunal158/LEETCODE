class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0, n = nums.size();
        vector<int> ans;
        while(i < n){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct])        //when Isolved the comparing nums[i]!=i+1 was resulting in TLE
                swap(nums[i],nums[correct]);
            else
                i++;
        }
        for(int i = 0; i < n; i++){
            if (nums[i] != i+1){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
