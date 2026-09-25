class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer="";
        int j=0;
        int i=0;
        while(i<word1.size() || j<word2.size())
        {
            if(i<word1.size())
            {
                answer += word1[i];
                i++;
            }
            if(j<word2.size())
            {
                answer += word2[j];
                j++;
            }
        }
        return answer;
    }
};