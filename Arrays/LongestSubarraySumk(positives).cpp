class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int i=0;
        int sum=0,len=0;
        for(int j=0;j<n;j++)
        {
            sum+=nums[j];
            while(i<=j && sum>k)
            {
                sum-=nums[i];
                i++;
            }
            if(sum==k)
            {
                len=max(len,j-i+1);
            }
        }
        return len;
    }
};
