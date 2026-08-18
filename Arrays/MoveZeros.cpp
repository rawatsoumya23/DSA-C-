class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;//where should the non-zero element be placed
        for(int i=0;i<nums.size();i++)//scans for non-zero elements
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }
};
