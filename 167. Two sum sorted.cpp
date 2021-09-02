class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>ans;
        int diff;
        int i=0,j=num.size()-1;
        while(i<j)
        {
            if(num[j]+num[i]==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(num[j]+num[i]<target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};
