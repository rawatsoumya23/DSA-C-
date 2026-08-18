class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;//first element is fixed
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
        
    }
};
