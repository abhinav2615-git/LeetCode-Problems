class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int p1 = 0;
        int p2 = nums.size() - 1;
        int k = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            int sq1 = pow(nums[p1], 2);
            int sq2 = pow(nums[p2], 2);
            if(sq1 > sq2){
                ans[k] = sq1;
                p1++;
            }
            else{
                ans[k] = sq2;
                p2--;
            }
            k--;
        }

        return ans;
    }
};