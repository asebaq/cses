#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

// Two Knights
int main() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; ++i) {
        // all_possible_combinations - all_possible_attack_positions
        cout << (((i*i) * ((i*i) - 1)) / 2) - (4 * (i-1) * (i-2))<< endl;
    }
    return 0;
}
