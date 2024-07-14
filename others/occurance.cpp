#include <iostream>
#include <vector>

void computeLPSArray(const std::string& pattern, std::vector<int>& lps) {
    int len = 0;  // Length of the previous longest prefix suffix

    lps[0] = 0;  // lps[0] is always 0
    int i = 1;

    while (i < pattern.length()) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void findPatternOccurrences(const std::string& text, const std::string& pattern) {
    std::vector<int> lps(pattern.length());
    computeLPSArray(pattern, lps);

    int i = 0;  // Index for text[]
    int j = 0;  // Index for pattern[]

    while (i < text.length()) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == pattern.length()) {
            // Pattern found, print its starting index
            std::cout << "Pattern found at index " << i - j << std::endl;
            j = lps[j - 1];
        } else if (i < text.length() && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    std::string text = "ABABDABABABABABDABABCABAB";
    std::string pattern = "ABAB";
    
    findPatternOccurrences(text, pattern);

    return 0;
}