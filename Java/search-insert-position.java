//  Search Insert Position

// Time O(logN), Space O(1)
class Solution {
    public int searchInsert(int[] nums, int target) {
        int i = 0, j = nums.length;
        while (i < j) {
            int mid = i + (j-i) / 2;
            if (nums[mid] < target)
                i = mid + 1;
            else
                j = mid;
        }
        return i;
    }
}