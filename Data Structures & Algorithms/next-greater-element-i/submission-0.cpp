class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans (nums1.size(), -1);
        for(int i = 0; i < nums1.size(); i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            int idx = it - nums2.begin();
            while(idx < nums2.size()){
                if(nums2[idx] > nums1[i]){
                    ans[i] = nums2[idx];
                    break;
                }
                idx++;
            }
        }
        return ans;
    }
};