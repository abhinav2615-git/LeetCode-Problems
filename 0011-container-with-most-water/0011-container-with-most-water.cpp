class Solution {
public:
    int maxArea(vector<int>& height) {

        int p1 = 0;
        int p2 = height.size() - 1;
        int m = 0;
        while (p1 < p2) {
            int prod = min(height[p1], height[p2]) * (p2 - p1);
            if (prod > m) {
                m = prod;
            }
            if (height[p1] < height[p2]) {
                p1++;
            }
            else {
                p2--;
            }
        }

        return m;
    }
};