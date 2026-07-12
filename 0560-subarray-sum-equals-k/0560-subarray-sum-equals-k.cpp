class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixsum(n);
        prefixsum[0] = nums[0];
        for(int i=1;i<n;i++){
            prefixsum[i] = prefixsum[i-1]+nums[i];
        }
        unordered_map<int,int> map;
        int count = 0;
        for(int i = 0;i<n;i++){
            if(prefixsum[i]==k)count++;
            int val = prefixsum[i]-k;
            if(map.find(val)!= map.end()){
                count+=map[val];
            }

            if(map.find(prefixsum[i])==map.end()){
                map[prefixsum[i]]==0;
            }
            map[prefixsum[i]]++;

        }
        return count;
    }
};