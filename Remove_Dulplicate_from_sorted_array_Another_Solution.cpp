class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        int set=1;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[index])
            {
                nums[++index] = nums[i];
                 
                set=1;   
            }
            else
            {
                if(set==1)
                {
                    nums[++index]=nums[i];
                    set=0;
                }
            }
        }
        return (index+1);
        
    }
};