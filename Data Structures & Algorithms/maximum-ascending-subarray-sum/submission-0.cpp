class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int max_sum = 0;
        for(int i = 1; i < nums.size(); i++){
            int sum = nums[i-1];
            if(nums[i-1] < nums[i]){
                while(i < nums.size() && nums[i-1] < nums[i]){
                    sum += nums[i];
                    i++;
                }
                i--;
            }
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};