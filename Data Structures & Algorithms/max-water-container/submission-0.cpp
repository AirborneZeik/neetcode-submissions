class Solution {
public:
    int maxArea(vector<int>& heights) {
        int front = 0;
        int back = heights.size() - 1;

        int largest_sum = 0;

        while (front < back) {
            int curr_total = (back - front) * min(heights[front], heights[back]);
            if (curr_total > largest_sum) {
                largest_sum = curr_total;
            }
            if (heights[front] < heights[back]) {
                front++;
            } else {
                back--;
            }
        }

        return largest_sum;
    }
};
