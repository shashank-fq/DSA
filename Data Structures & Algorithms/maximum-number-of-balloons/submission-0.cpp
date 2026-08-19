class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> temp (5,0);
        for(int i = 0; i < text.size(); i++){
            char ch = text[i];
            if(ch == 'b'){
                temp[0] += 2;
            }else if(ch == 'a'){
                temp[1] += 2;
            }else if(ch == 'l'){
                temp[2]++;
            }else if(ch == 'o'){
                temp[3]++;
            }else if(ch == 'n'){
                temp[4] += 2;
            }
        }
        int mn = temp[0];
        for(int i = 1; i < temp.size(); i++){
            mn = min(mn, temp[i]);
        }
        return mn/2;
    }
};