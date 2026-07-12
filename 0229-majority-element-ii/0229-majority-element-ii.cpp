class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int fc =0,sc=0;
        int f = INT_MIN;
        int s = INT_MIN;
        for(int i=0;i<n;i++){
            if(fc ==0 && nums[i]!=s){
                fc=1;
                f= nums[i];
            }
            else if(sc ==0 && nums[i]!=f){
                sc=1;
                s= nums[i];
            }
            else if(nums[i]==f){
                fc++;
            }
            else if(nums[i]==s){
                sc++;
            }
            else{
                fc--;
                sc--;
            }
        }
        vector<int> res;
        fc=0;
        sc=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==f)fc++;
            if(nums[i]==s)sc++;
        }
        int mini = (int)(n/3) +1;
        if(fc>=mini){
            res.push_back(f);
        }
        if(sc>=mini){
            res.push_back(s);
        }
        return res;
    }
};