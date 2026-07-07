class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                swap(nums[count0],nums[i]);
                count0++;
            }
        }
        for(int i = count0;i<n;i++){
            if(nums[i]==1){
                swap(nums[count0],nums[i]);
                count0++;
            }
        }
    }
};