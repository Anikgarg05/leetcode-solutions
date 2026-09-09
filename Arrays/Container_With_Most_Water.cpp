// LeetCode 11 - Container With Most Water
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int max_water = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            int area = width * h;

            max_water = max(max_water, area);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return max_water;
    }
};
