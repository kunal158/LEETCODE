class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                    return mid;              
                }
                else if(arr[mid-1]>arr[mid])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
        }
            else if(mid==0){
                if(arr[mid+1]>arr[mid]){
                    return mid+1;
                }
                else{
                    return mid;
                }
            }
            else if(mid==arr.size()-1){
                if(arr[mid-1]>arr[mid]){
                    return mid-1;
                }
                else{
                    return mid;
                }
            }
            
        }
        return -1;
        
    }
};
