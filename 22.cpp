#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
bool isPalindrome(string s) {
    string filteredString;


    for (char c :s) {
        if (isalnum(c)) {
            filteredString += tolower(c);
        }
    }


    int left = 0;
    int right = filteredString.size() - 1;

    while (left < right) {
        if (filteredString[left] != filteredString[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << boolalpha << isPalindrome(s1) << endl;
    cout << boolalpha << isPalindrome(s2) << endl;

    return 0;
}
