class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.size() == 1)
            return nums;

        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] > nums[j])
                    swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};