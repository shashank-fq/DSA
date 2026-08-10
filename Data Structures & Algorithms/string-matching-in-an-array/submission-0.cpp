class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> w;
        bool next = false;
        for(int it= 0; it < words.size(); it++){
            next = false;
            for(int i = 0; i < words.size(); i++){
                if(i == it || next) continue;

                for(int rit = 0; rit + words[it].size()-1 < words[i].size(); rit++){
                    string sub = words[i].substr(rit,words[it].size());
                    if(words[it] == sub){
                        w.push_back(words[it]);
                        next = true;
                        break;
                    }
                }
            }
        }
        return w;
    }
};