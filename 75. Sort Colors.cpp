class Solution {
public:
    void sortColors(vector<int>& a) {
        //dutch national flag algorithm is used
   	int i=0;
    int j=a.size()-1;
    int m=0;
    while(m<=j){
        if(a[m]==0){
            swap(a[i],a[m]);
            i++;
            m++;
        }
        else if(a[m]==1){
            m++;
        }
        else{
            swap(a[m],a[j]);
                j--;
            }
        }
        
    }
    
};
