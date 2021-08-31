//by negative method
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int currnum = abs(nums[i])-1;
            if(nums[currnum]<0) 
                ans.push_back(currnum+1);
            else 
                nums[currnum] *= -1;
        }
        return ans;
    }
};




//also by cyclic sort

/*class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0, n = nums.size();
        vector<int> ans;
        while(i < n){
            int correct = nums[i] - 1;
            if(nums[i] != nums[correct])        
                swap(nums[i],nums[correct]);
            else
                i++;
        }
        for(int i = 0; i < n; i++){
            if (nums[i] != i+1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        
    }
};                    */
