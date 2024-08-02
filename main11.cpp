#include <vector>
#include <iostream>

using namespace std;


int findFirstPosition(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findLastPosition(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

// دالة للبحث عن نطاق الهدف في المصفوفة
vector<int> searchRange(const vector<int>& nums, int target) {
    int firstPos = findFirstPosition(nums, target);
    if (firstPos == -1) {
        return {-1, -1};
    }

    int lastPos = findLastPosition(nums, target);

    return {firstPos, lastPos};
}

int main() {

    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    vector<int> result1 = searchRange(nums1, target1);
    cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;


    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    vector<int> result2 = searchRange(nums2, target2);
    cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;
    vector<int> nums3 = {};
    int target3 = 0;
    vector<int> result3 = searchRange(nums3, target3);
    cout << "[" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}
