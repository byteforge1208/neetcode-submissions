class Solution {
public:
    vector<vector<int>> threesum(vector<int>& nums,int start, long long target){
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=start; i+2<n; i++){
            if(i > start && nums[i-1] == nums[i]) continue;

            int j = i+1;
            int k = n-1;

            while(j < k){
                long long sum = (long long)nums[i]+nums[j]+nums[k];
                if(sum < target) j++;
                else if(sum > target) k--;
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j-1] == nums[j]) j++;
                    while(j < k && nums[k+1] == nums[k]) k--;
                }
            }
        }
        return ans;
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        for(int i = 0; i+3<nums.size(); i++){
            if(i > 0 && nums[i-1] == nums[i])
                continue;
            
            long long newTarget = (long long)target - nums[i];
            vector<vector<int>> temp = threesum(nums, i+1, newTarget);
            if(temp.size() == 0)
                continue;
            else{
                for(auto &x: temp){
                    ans.push_back({nums[i],x[0],x[1],x[2]});
                }

            }
            
        }
        return ans;
    }
};