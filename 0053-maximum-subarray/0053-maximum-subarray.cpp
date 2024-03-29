class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int rsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            rsum=max(sum,rsum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return rsum;
    }
};