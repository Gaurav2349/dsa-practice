#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    // Step 1: Check length
    if (s.length() != t.length()) {
        return false;
    }

    // Step 2: Create frequency array
    int count[26] = {0};

    // Step 3: Count characters from first string
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }

    // Step 4: Subtract using second string
    for (int i = 0; i < t.length(); i++) {
        count[t[i] - 'a']--;

        // If any value becomes negative → not anagram
        if (count[t[i] - 'a'] < 0) {
            return false;
        }
    }

    // Step 5: If all matched
    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "True (Anagram)" << endl;
    } else {
        cout << "False (Not Anagram)" << endl;
    }

    return 0;
}
