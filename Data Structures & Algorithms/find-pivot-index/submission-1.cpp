class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(!(sum - nums[0])) return 0;
        int curr_sum = 0;
        int i;
        for(i = 0; i < nums.size()-1; i++){
            curr_sum += nums[i];
            if((curr_sum*2)+nums[i+1] == sum) return i+1;
        }
        if(!(curr_sum)) return nums.size();
        return -1;
    }
};