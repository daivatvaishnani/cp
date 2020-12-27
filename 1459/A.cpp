#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ":" << (x) << " | "

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(10), b(10);
        string as, bs;
        cin >> as >> bs;
        assert(as.length() == bs.length());
        assert(as.length() == n);
        for (int i = 0; i < n; ++i) {
            a[as[i]-'0']++;
            b[bs[i]-'0']++;
        }
        int ans = 0;
        /* for (int i = 0; i < 9; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < 9; ++i) {
            cout << b[i] << " ";
        } */
        for (int i = 9; i >= 0; --i) {
                        
            if (a[i] > b[i]) {
                ans = 1;
                break;
            } else if (a[i] < b[i]) {
                ans = -1;
                break;
            }
        }
        if (ans == 1) {
            cout << "RED\n";
        } else if (ans == -1) {
            cout << "BLUE\n";
        } else {
            cout << "EQUAL\n";
        }
    }
    return 0;
}

/*
 * 884 - 884 848 488
 * 955 - 955 595 559
 *
 * */
