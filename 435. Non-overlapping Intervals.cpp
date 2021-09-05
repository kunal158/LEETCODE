//greedy approach is used and we have sorted acc to end time
    bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		int ans=-1;      
		if(intervals.size()==0) return 0;       
		sort(intervals.begin(),intervals.end(),comp); 
        
		int prev=0;
        for(int i=1;i<intervals.size();i++){
            
			if(intervals[prev][1]>intervals[i][0]) {
				ans++;                
			}else prev=i;           
		}
		return ans+1;                 
       
	}
};
