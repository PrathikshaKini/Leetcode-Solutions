class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int maxtillnow=INT_MIN;
        long long int sum=0;
        long long int i;
        for(i=0;i<nums.size();i++)
        {
               sum+=nums[i];
                if(sum>maxtillnow)
                {
                    maxtillnow=sum;
                   // cout<<maxtillnow<<endl;
                }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxtillnow;
        
    }
};
