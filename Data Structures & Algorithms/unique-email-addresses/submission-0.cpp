class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        bool is_domain = false;
        vector<string> manipulate;
        for(string str: emails){
            is_domain = false;
            string s = "";
            for(int i = 0; i < str.size(); i++){
                if(is_domain || str[i] == '@'){
                    is_domain = true;
                    while(i < str.size()){
                            s += str[i];
                        i++;
                    }
                    break;
                }
                
                if(str[i] == '+'){
                    while(i < str.size() && str[i] != '@'){ 
                        i++;
                    } 
                    i--;
                    continue;
                }
                if(str[i] == '.') continue;
                s += str[i];
            } 
            manipulate.push_back(s);
        }
        sort(manipulate.begin(), manipulate.end());
        int count = 0;
        for(int i = 0; i < manipulate.size() -1; i++){
            if(manipulate[i] != manipulate[i+1]) count++;
        }
        return count+1;
    }
};