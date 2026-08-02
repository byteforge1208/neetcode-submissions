class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_ele = nums[0];
        int count = 1;

        if(nums.size() == 1)
            return nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == maj_ele)
                count++;
            else{
                count--;
                if(count == 0){
                    maj_ele = nums[i];
                    count++;
                }
            }
        }

        return maj_ele;
    }
};