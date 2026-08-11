class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> real_flrbd = {0};
        for(int i = 0; i < flowerbed.size(); i++){
            real_flrbd.push_back(flowerbed[i]);
        }
        real_flrbd.push_back(0);

        for(int i = 1; i < real_flrbd.size()-1; i++){
            
            
            if(real_flrbd[i-1] == 0 && real_flrbd[i] == 0 && real_flrbd[i+1] == 0){
                real_flrbd[i] = 1;
                n--;
                
            }
        }
        return (n < 1);
    }
};