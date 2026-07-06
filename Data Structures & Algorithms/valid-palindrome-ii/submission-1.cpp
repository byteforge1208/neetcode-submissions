class Solution {
public:
    bool checkForPalindrome(string &s,int i, int j){
        while(i<j){
            if(s[i] != s[j])
                return false;
            
            i++;
            j--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            if(s[i] != s[j]){
                if(checkForPalindrome(s,i+1,j) || checkForPalindrome(s,i,j-1))
                    return true;
                
                return false;
            } 

            i++;
            j--;
        }

        return true;
        
    }
};