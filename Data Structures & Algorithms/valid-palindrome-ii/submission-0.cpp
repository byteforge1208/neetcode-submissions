class Solution {
public:
    bool checkForPalindrome(string s){
        int i = 0;
        int j = s.size()-1;

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
            string a = s;
            string b = s;
            a.erase(a.begin()+i);
            b.erase(b.begin()+j);

            if(s[i] != s[j]){
                if(checkForPalindrome(a) || checkForPalindrome(b))
                    return true;
                
                return false;
            } 

            i++;
            j--;
        }

        return true;
        
    }
};