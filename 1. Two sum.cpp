class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            diff=target-nums[i];
            if(mp.find(diff)!=mp.end()&& mp.find(diff)->second!=i)
            {
                ans.push_back(mp.find(diff)->second);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
