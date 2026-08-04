class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i=0; i<strs[0].size(); i++){
            char c = strs[0][i];

            bool isPrefix = true;
            for(int j=1; j<strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != c){
                    isPrefix = false;
                    return ans;
                }    
            }
            if(isPrefix)
                ans.push_back(c);
        }
        return ans;
    }
};