class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countM = 0;
        for(int i = 0; i < nums.size(); i++){
            int count =0;
            while(i < nums.size() && nums[i] == 1){
                count++;
                i++;
            }
            countM = max(count, countM);
        }
        return countM;
    }
};