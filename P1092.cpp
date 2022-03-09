#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void vPrint(vector<int> &v) {
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    ll n, sum, ans;
    vector<int> a, b;
    cin >> n;
    sum = n * (n + 1) / 2;

    if (sum % 2 == 1) {
        cout << "NO\n";
    } else {
        ans = sum / 2;
        for (int i = n; i >= 1; i--) {
            if (i <= ans) {
                a.push_back(i);
                ans -= i;
            } else {
                b.push_back(i);
            }
        }
        cout << "YES\n";
        cout << a.size() << endl;
        vPrint(a);
        cout << b.size() << endl;
        vPrint(b);
    }

    return 0;
}
