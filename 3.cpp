#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<int> replaceElements(std::vector<int>& arr) {
    int n = arr.size();
    int max_right = -1;


    for (int i = n - 1; i >= 0; --i) {
        int new_value = max_right;
        max_right = std::max(max_right, arr[i]);
        arr[i] = new_value;
    }

    return arr;
}

int main() {
    vector<int> arr = {17, 18, 5, 4, 6, 1};
    vector<int> result = replaceElements(arr);

    for(int val : result) {
        cout << val << " ";
    }
    return 0;
}
