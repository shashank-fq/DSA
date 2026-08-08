class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                int j = 0;
                int k = i;
                while(j < needle.size() && needle[j] == haystack[k]){
                    if(j == needle.size()-1) return i; 
                    k++; j++;
                }
            }
        }
        return -1;
    }
};