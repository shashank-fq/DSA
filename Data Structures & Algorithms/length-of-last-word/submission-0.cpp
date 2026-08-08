class Solution {
public:
    int lengthOfLastWord(string s) {
        bool start = false;
        int count = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] != ' ') start = true;
            else start = false;

            if(start) count++;

            if(count && !start) break; 
        }
        return count;
    }
};