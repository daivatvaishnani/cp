#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ":" << (x) << " | "

int select(int a, int b, int c, int l, int r) {
    vector<int> p = {a, b, c};
    for (int i : p) {
        if (i != l && i != r) {
            return i;
        }
    }
    return -1;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n), d(n, -1);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        for(int i = 0; i < n; ++i) {
            int l = -1, r = -1;
            if (i == n-1) {
                l = d[i-1], r = d[0];
            } else if (i > 0) {
                l = d[i-1];
            }
            d[i] = select(a[i], b[i], c[i], l, r);
            cout << d[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
