class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(!s.size()) return true;
        int j, i;
        for(i = 0, j = 0; i < t.size() && j < s.size(); i++){
            if(s[j] == t[i])  j++;
        }
        return j == s.size();
    }
};