class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        if(n==0) return v;
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&nums[i]>=st.top())
                 st.pop();
            if(st.empty())
                v.push_back(-1);
            else
                v.push_back(st.top());
            st.push(nums[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
