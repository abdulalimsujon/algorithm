// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         string res;
//         for (char c : s) {
//             if (c == 'b') {
//                 for (int i = res.size() - 1; i >= 0; i--) {
//                     if (islower(res[i])) {
//                         res.erase(res.begin() + i);
//                         break;
//                     }
//                 }
//             } else if (c == 'B') {
//                 for (int i = res.size() - 1; i >= 0; i--) {
//                     if (isupper(res[i])) {
//                         res.erase(res.begin() + i);
//                         break;
//                     }
//                 }
//             } else {
//                 res.push_back(c);
//             }
//         }

//         cout << res << '\n';
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;

//         vector<char> v;

//         for (char c : s) {
//             if (c == 'b') {
              
//                 for (int i = v.size() - 1; i >= 0; i--) {
//                     if (islower(v[i])) {
//                         v.erase(v.begin() + i);
//                         break;
//                     }
//                 }
//             } else if (c == 'B') {

//                 for (int i = v.size() - 1; i >= 0; i--) {
//                     if (isupper(v[i])) {
//                         v.erase(v.begin() + i);
//                         break;
//                     }
//                 }
//             } else {
//                 v.push_back(c);
//             }
//         }

//         for (char c : v) cout << c;
//         cout << '\n';
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<char> result;

        vector<int> lower, upper;

        for (char c : s) {
            if (c == 'b') {
                if (!lower.empty()) {
                    int idx = lower.back();
                    lower.pop_back();
                    result[idx] = '#'; 
                }
            } else if (c == 'B') {
                if (!upper.empty()) {
                    int idx = upper.back();
                    upper.pop_back();
                    result[idx] = '#';  
                }
            } else {
                if (islower(c)) lower.push_back(result.size());
                else upper.push_back(result.size());
                result.push_back(c);
            }
        }

        for (char c : result)
            if (c != '#') cout << c;
        cout << '\n';
    }

    return 0;
}
