class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq (26, 0);
        int odd_max_freq = 0;
        int even_min_freq = INT_MAX;
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'a'] += 1;
        }
        for(int i = 0; i < 26; i++){
            if(freq[i] == 0) continue;
            if(!(freq[i] % 2)){
                //even
                even_min_freq = min(even_min_freq, freq[i]);
            }else{
                //odd
                odd_max_freq = max(odd_max_freq, freq[i]);
            }
        }
        return odd_max_freq - even_min_freq;
    }
};