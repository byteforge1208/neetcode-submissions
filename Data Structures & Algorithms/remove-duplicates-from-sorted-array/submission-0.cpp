class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1)
            return 1;
        
        int ele = nums[0];

        int i = 1;
        int j = 1;

        while(j < nums.size()){
            if(nums[j] == ele)
                j++;
            else{
                nums[i] = nums[j];
                ele = nums[j];
                i++;
                j++;
            }
        } 

        return i;
    }
};