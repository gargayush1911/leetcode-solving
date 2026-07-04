class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> numswithindex;

        for(int i=0;i<nums.size();i++){
            numswithindex.push_back({nums[i],i});
        }

        sort(numswithindex.begin(),numswithindex.end());

        int left=0;
        int right = numswithindex.size()-1;

        while(left<right){
            int sum = numswithindex[left].first + numswithindex[right].first;

            if(sum==target){
                return {numswithindex[left].second,numswithindex[right].second};
            }
            if(sum<target){
                left++;
            }
            if(sum>target){
                right--;
            }
        }
        return {};
    }
};