class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0,len=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            len=max(len,sum);

            if(sum<0)
            {
                sum=0;//start a new subarray sum
            }
        }
        return len;
        
    }
};
