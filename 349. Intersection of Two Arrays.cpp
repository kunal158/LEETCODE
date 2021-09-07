class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int>news(nums1.begin(),nums1.end());
        vector<int>v;
        for(int i=0;i<nums2.size();i++)
        {
            if(news.find(nums2[i])!=news.end())
            {
                v.push_back(nums2[i]);
                news.erase(nums2[i]);
            }                
        }
        return v;       
    }
};
