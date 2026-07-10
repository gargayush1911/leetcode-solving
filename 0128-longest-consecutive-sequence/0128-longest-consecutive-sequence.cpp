class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset;
        int n = nums.size();
        for(int i=0;i<n;i++){
            numset.insert(nums[i]);
        }
        int longest =0;
        for(int num : numset){
            if(numset.count(num-1)==0){
                int length =1;
                int next = num+1;
                while(numset.count(next)>0){
                    length++;
                    next++;
                }
                longest = max(length,longest);
            }
        }
        return longest;
    }
};