class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;
        int j,k;
        sort(a.begin(),a.end());
        if(a.size()>=3)
        {
        for(int i=0;i<a.size()-2;i++)
        {
             if(i>0&&a[i]==a[i-1])
            continue; 
            j=i+1;k=a.size()-1;
            while(j<k)
            {
                if(a[i]+a[j]+a[k]==0)
                {
                    ans.push_back({a[i],a[j],a[k]});
                    j++;
                    while(j<k&&a[j]==a[j-1])
                    j++;
                }
            if(a[i]+a[j]+a[k]>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
        }
    return ans;
    }
};
