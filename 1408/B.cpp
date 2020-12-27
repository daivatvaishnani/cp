#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ":" << (x) << " | "

int solve(int n, int k, vector<int> &a) {
    int m = 3;
    vector<vector<int> > b(n, vector<int> (m, -1));
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " - ";
        for (int bij : b[i]) {
            cout << bij << " ";
        }
        
        cout << "\n";
    }
    return m;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, k, a) << "\n";
        cout << "---------- case ----------\n";
    }
    return 0;
}


/*
 *
 * a1 - b11 b21 .. bm1
 * a2 - b21 b22 .. bm2 
 * .    .   .       .
 * .    .   .       .
 * an - bn1 bn2 .. bnm
 *
 * bij >= b(i+1)j
 * ai >= a(i+1)
 * */
