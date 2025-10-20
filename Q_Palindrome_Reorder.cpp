#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s)
        freq[c]++;

    int oddCount = 0;
    char oddChar = 0;
    for (auto [c, count] : freq) {
        if (count % 2 != 0) {
            oddCount++;
            oddChar = c;
        }
    }

    // A palindrome is impossible if more than one char has an odd frequency
    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    // Build the first half of the palindrome
    string firstHalf = "";
    for (auto [c, count] : freq) {
        firstHalf += string(count / 2, c);
    }

    // Build the full palindrome
    string result = firstHalf;
    if (oddCount == 1)
        result += string(freq[oddChar], oddChar); // middle part (odd count)
    reverse(firstHalf.begin(), firstHalf.end());
    result += firstHalf;

    cout << result;
    return 0;
}
