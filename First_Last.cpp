#include <bits/stdc++.h>
using namespace std;

class Val {
public:
    long long value;
    int first;
    int last;

    Val(long long v, int f, int l) {
        value = v;
        first = f;
        last = l;
    }
};

bool cmpValue(const Val &a, const Val &b) {
    return a.value < b.value;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<Val> items;
    for(int i = 0; i < n; i++) {
        items.push_back(Val(arr[i], i+1, i+1));
    }

    sort(items.begin(), items.end(), cmpValue);

    vector<Val> result;
    for(int i = 0; i < items.size(); i++) {
        if(result.empty() || result.back().value != items[i].value) {
            result.push_back(items[i]);
        } else {
            result.back().last = items[i].last;
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i].value << " " << result[i].first << " " << result[i].last << "\n";
    }

    return 0;
}
