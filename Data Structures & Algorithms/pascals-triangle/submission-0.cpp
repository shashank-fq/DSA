class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         if(!numRows) return {{}};
        vector<vector<int>> ans;
        

        for(int i = 0; i < numRows; i++){
            vector<int> part(i+1);
            for(int j = 0; j < i+1; j++){
                if(j == 0 || j == i) part[j] = 1;
                else part[j] = ans[i-1][j-1] + ans[i-1][j];

            }
            ans.push_back(part);
            part.clear();
        }
        return ans;
    }
};