class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int start=0;
        int res1=-1,res2=-1;
        vector<int>ans;
        int end=nums.size()-1;
        char res;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(nums[mid]==target){
                res1=mid;
                end=mid-1;                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        start=0;
        end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(nums[mid]==target){
                res2=mid;
                start=mid+1;                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        ans.push_back(res1);
        ans.push_back(res2);
        return ans;
    }
};
