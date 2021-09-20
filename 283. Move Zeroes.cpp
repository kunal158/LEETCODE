class Solution {
public:
    // swapping two numbers
    void swap(int & num1,int & num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    void moveZeroes(vector<int>& nums) {
        int zeroIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[zeroIndex]==0 && nums[i]!=0){
                swap(nums[zeroIndex],nums[i]);zeroIndex++;
            }
            else if(nums[zeroIndex]!=0)zeroIndex++;
            
        }
        
    }
};
Comments: 1
