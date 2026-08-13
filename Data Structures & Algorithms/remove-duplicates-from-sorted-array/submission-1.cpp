class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1)
            return 1;

        int i=1,j=1;

        while(j < nums.size()){
            if(nums[i-1] == nums[j])
                j++;
            else{
                nums[i] = nums[j];
                i++;
                j++;
            }
        }
        return i;
        
    }
};