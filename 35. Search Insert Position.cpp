class Solution {
public:
    int searchInsert(vector<int>& n, int target) {
        int start=0;
        int end=n.size()-1;
      
        while(start<=end)
        {
            int mid=start+(end-start)/2;

            if(target==n[mid])
            {
                return mid;
            }
            else if(target<n[mid]){
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return end+1;
    }
};
