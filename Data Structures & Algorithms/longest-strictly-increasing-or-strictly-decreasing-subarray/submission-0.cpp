class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc_count = 1;
        int dec_count = 1;
        for(int i = 1; i < nums.size(); i++){
           
            int temp1 = 1, temp2 = 1;
            if(nums[i-1] < nums[i]){
                while(i < nums.size() && nums[i-1] < nums[i]){
                    temp1++;
                    i++;
                }
                i--;
                inc_count = max(inc_count, temp1);
            }else if(nums[i-1] > nums[i]){
                while(i < nums.size() && nums[i-1] > nums[i]){
                    temp2++;
                    i++;
                }
                i--;
                dec_count = max(dec_count, temp2);
            }
        }
        return max(dec_count, inc_count);
    }
};