#include <iostream>
#include <cctype>   // For isalnum function
#include <string>
using namespace std;

bool isPalindrome(string s) {
    string cleanStr = "";
    for (char c : s) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }

    int left = 0, right = cleanStr.length() - 1;
    while (left < right) {
        if (cleanStr[left] != cleanStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input = "A man, a plan, a canal: Panama";

    if (isPalindrome(input)) {
        cout << "The given string is a palindrome." << endl;
    } else {
        cout << "The given string is not a palindrome." << endl;
    }

    return 0;
}