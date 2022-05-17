#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    vector<string> g_code;
    cin >> n;
    if (n <= 0) return 0;
    g_code.emplace_back("0");
    g_code.emplace_back("1");
    for (int i = 2; i < (1 << n); i = i << 1) {

        for (int j = i - 1; j >= 0; j--) {
            g_code.push_back(g_code[j]);
        }

        // append 0 to the first half
        for (int j = 0; j < i; j++) {
            g_code[j] = "0" + g_code[j];
        }
        // append 1 to the second half
        for (int j = i; j < 2 * i; j++) {
            g_code[j] = "1" + g_code[j];
        }
    }

    for (auto &i: g_code)
        cout << i << endl;
    return 0;
}
