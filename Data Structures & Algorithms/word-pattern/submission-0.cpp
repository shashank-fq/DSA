class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string token;
        while(getline(ss, token, ' ')) words.push_back(token);

        if(pattern.size() != words.size()) return false;
        unordered_map<string, char> mp;
        set<char> used;

        for(int i = 0; i < pattern.size(); i++){
            char ch = pattern[i];
            if((mp.find(words[i]) == mp.end()) && used.find(ch) == used.end()){
                used.insert(ch);
                mp[words[i]] = ch;
            }else if (mp[words[i]] != ch) return false;
        } 
        return true;
    }
};