class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;

        string word3 = "";
        bool w1 = true;

        while(i < word1.size() && j < word2.size()){
            if(w1){
                word3.push_back(word1[i]);
                i++;
            }
            else{
                word3.push_back(word2[j]);
                j++;
            }
            w1 = !w1;
        }

        if(i == word1.size()){
            while(j < word2.size()){
                word3.push_back(word2[j]); 
                j++;
            }
               
        }else{
            while(i < word1.size()){
               word3.push_back(word1[i]); 
               i++;
            }

        }

        return word3;
    }
};