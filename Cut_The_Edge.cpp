#include <bits/stdc++.h>
using namespace std;

struct Info {
    long long value;
    int first;
    int last;
};

bool cmpValue(const Info &a, const Info &b) {
    return a.value < b.value;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<Info> infos;
    for(int i = 0; i < n; i++) {
        infos.push_back({arr[i], i+1, i+1});
    }

    sort(infos.begin(), infos.end(), cmpValue);

    vector<Info> result;
    for(int i = 0; i < infos.size(); i++) {
        if(result.empty() || result.back().value != infos[i].value) {
            result.push_back(infos[i]);
        } else {
            result.back().last = infos[i].last;
        }
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i].value << " " << result[i].first << " " << result[i].last << "\n";
    }

    return 0;
}
