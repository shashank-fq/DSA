class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string retur = "";
        for(int j = 0; j < strs[0].size(); j++){
            char ch = strs[0][j];
            int i = 1;
            while(i < strs.size()){
                if(ch != strs[i][j]) return retur;
                i++;
            } 
            retur.push_back(ch);
        }
        return retur;
    }
};