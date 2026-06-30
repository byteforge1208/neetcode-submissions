class Solution {
public:
    bool checkPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    bool isPalindrome(string s) {
        string minimal = "";
        for (char& c : s) {
            if (isspace(c))
                continue;

            if (isalnum(c)) {
                minimal.push_back(tolower(c));
            }
        }

        return checkPalindrome(minimal);
    }
};