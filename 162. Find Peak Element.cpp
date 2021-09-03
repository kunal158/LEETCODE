//this code is better than the last one
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[mid+1]) {
                end = mid;
            } else {

                start = mid + 1; 
            }
        }
        return start;
    }
};

//java code
/*class Solution {
    public int findPeakElement(int[] arr) {
        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[mid+1]) {
                end = mid;
            } else {

                start = mid + 1; 
            }
        }
        return start;
    }
}*/
