class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        } 

        if(nums.size() != s.size())
            return true;

        return false;
    }
};