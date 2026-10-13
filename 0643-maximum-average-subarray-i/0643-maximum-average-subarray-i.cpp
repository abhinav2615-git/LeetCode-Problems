class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum = sum + nums[i];
        }
        double maxAvg = (double)sum/k;

        for(int i = k; i<nums.size(); i++){
            sum = sum - nums[i-k] + nums[i];
            double avg = (double)sum/k;
            maxAvg = max(maxAvg, avg);
        }
        return maxAvg;
    }
};