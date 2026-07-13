class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        int a =0;
        
        while(a<n){
            if(a>0&&nums[a]==nums[a-1]){
                a++;
                continue;
            }
            int d = n-1;
            while(d>a){
                if(d<n-1&&nums[d]==nums[d+1]){
                d--;
                continue;
                }
                int b = a+1;
            int c = d-1;
            while(b<c){
                long sum =(long) nums[a]+ nums[b]+ nums[c]+  nums[d];
                if(sum >target){
                    c--;
                }
                else if(sum<target){
                    b++;
                }
                else if(sum==target){
                    ans.push_back({nums[a],nums[b],nums[c],nums[d]});
                    b++,c--;
                    while(b<c&&nums[b]==nums[b-1]){b++;}
                    while(c>b&&nums[c]==nums[c+1]){c--;}
                }
            }
            d--;
            }
            a++;
        }
        return ans;
    }
};