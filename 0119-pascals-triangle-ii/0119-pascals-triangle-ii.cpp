class Solution {
public:
    vector<int> getRow(int r) {
        r = r+1;
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int i=1;i<r;i++){
            ans = ans*(r-i);
            ans = ans / i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
};