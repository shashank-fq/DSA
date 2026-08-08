class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i = 1; i < arr.size(); i++){
            int max = arr[i];
            for(int j = i; j < arr.size(); j++){
                if(max < arr[j]) max = arr[j];
            }
            arr[i-1] = max;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};