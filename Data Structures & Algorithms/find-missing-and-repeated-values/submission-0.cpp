class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a, b;
        vector<int> temp (grid.size()*grid.size()+1, 0);
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid.size(); j++){
                int idx = grid[i][j];
                if (temp[idx] == 1){
                    a = grid[i][j];
                }else temp[idx] = 1;
            }
        }
        for(int i = 1; i <= temp.size(); i++){
            if(temp[i-1] == 0) b = i;
        }
        return {a, b-1};
    }
};