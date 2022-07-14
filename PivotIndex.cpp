class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int prefixsum=0,i;
        for(i=0;i<nums.size();i++){
            prefixsum+=nums[i];
        }
        int leftsum=0;
        int rightsum=prefixsum;
        for(i=0;i<nums.size();i++){
            rightsum-=nums[i];
            
            if(rightsum==leftsum)
                return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};
