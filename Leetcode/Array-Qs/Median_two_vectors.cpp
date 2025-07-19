#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;
        vector<int> sath;
        int i = 0, j = 0;

        // Merge the two sorted arrays
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                sath.push_back(nums1[i++]);  // ✅ Correct way
            } else {
                sath.push_back(nums2[j++]);
            }
        }

        // Add remaining elements
        while (i < n) sath.push_back(nums1[i++]);
        while (j < m) sath.push_back(nums2[j++]);

        // Find median
        if (total % 2 == 1) {
            return sath[total / 2]; // odd size
        } else {
            return (sath[total / 2 - 1] + sath[total / 2]) / 2.0; // even size
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double median = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median is: " << median << endl;
    return 0;
}
