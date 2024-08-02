#include <iostream>
#include <vector>

using namespace std;

void printCheckerboard(int n) {
    int size = 2 * n;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {

            if ((i + j) % 2 == 0) {
                cout << '##';
            } else {
                cout << '..';
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    vector<int> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }

    for (int i = 0; i < t; ++i) {
        printCheckerboard(test_cases[i]);
    }

    return 0;
}

