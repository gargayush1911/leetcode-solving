class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum =INT_MIN;
        int n = nums.size();
        int sum = INT_MIN;
        for(int i=0;i<n;i++){
            if(sum<0){
                sum = 0;
            }
            sum = sum+nums[i];
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};