class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";

        int i=0,j=0;

        while(i < word1.size() && j < word2.size()){
            word3 += word1[i++];
            word3 += word2[j++];
        }

        word3.append(word1,i);
        word3.append(word2,j);

        return word3;
    }
};