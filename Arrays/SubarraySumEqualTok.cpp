class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        int sum=0,c=0;
        mpp[sum]++;//prefix sum 0 occurs once
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int prefixsum=sum-k;
            if(mpp.find(prefixsum)!=mpp.end())
            {
                c+=mpp[prefixsum];
            }
            mpp[sum]++;
        }
        return c;
    }
};
