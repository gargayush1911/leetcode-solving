class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int maxcount =0;
        if(nums[0]==1){
            maxcount = 1;
            count =1;
            }
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]==1&&nums[i+1]==1){
                count++;
            }
            if(nums[i]==1&&nums[i+1]==0){
                maxcount = max(count,maxcount);
                count=0;
            }
            if(nums[i]==0&&nums[i+1]==1){
                count++;
            }
            maxcount = max(count,maxcount);
        }
        return maxcount;
    }
};