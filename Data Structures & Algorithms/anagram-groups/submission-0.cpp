class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string, int>> manipulate;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            manipulate.push_back({s, i});
        }
        sort(manipulate.begin(), manipulate.end());
        vector<vector<string>> ans;
        vector<string> an;
        for(int i = 0; i < manipulate.size(); i++){
            an.push_back(strs[manipulate[i].second]);

            // If this is the last element OR the next sorted string is different
            if (i == manipulate.size() - 1 ||
                manipulate[i].first != manipulate[i + 1].first) {
                
                ans.push_back(an);
                an.clear();
            }
        }

        return ans;
    }
};
