class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int k = n;
        int i=0;
        while(i<k){
            if(nums[i]==val){
                nums[i]=nums[k-1];
                k--;
            }
            else{
                i++;
            }
        }
        return k;
    }
};