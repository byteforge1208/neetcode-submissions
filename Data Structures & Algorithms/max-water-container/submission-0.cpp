class Solution {
public:
    int calculate(int i,int j,int height){
        return (j-i)*height;
    }

    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;

        int ans = INT_MIN;

        while(i != j){
            ans = max(ans,calculate(i,j,min(height[i],height[j])));

            if(height[i] >= height[j])
                j--;
            else
                i++;
        }
        return ans;
    }
};