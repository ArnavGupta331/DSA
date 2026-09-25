class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int maxarea = 0;
        while(left<right)
        {
            int width = right - left;
            int usable = min(heights[left],heights[right]);
            int area = width*usable;
            maxarea = max(maxarea, area);
            if(heights[left]<heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxarea;
    }
};
