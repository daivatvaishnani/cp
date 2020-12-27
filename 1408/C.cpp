#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ":" << (x) << " | "

double solve(int n, double l, double u, vector<double> &a) {
    double t = 0.0, lt, rt, lv = u, lc = 0.0, rv = u, rc = l;
    int lp = 0, rp = n-1;
    cout << std::setprecision(20);
    while(lp <= rp) {
        lt = (a[lp] - lc) / lv;
        rt = (rc - a[rp]) / rv;
        if (lt < rt) {
            lv++;
            t += lt;
            lc = a[lp];
            rc -= rv * lt;
            lp++;
        } else if (rt < lt) {
            rv++;
            t += rt;
            lc += lv * rt;
            rc = a[rp];
            rp--;
        } else {
            lv++, rv++;
            t += rt;
            lc = a[lp];
            rc = a[rp];
            lp++, rp--;
        }
    }
    t += abs(rc - lc) / (lv + rv);
    return t;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("in", "r", stdin);
    int t;
    cin >> t;
    while (t--) {
        int n;
        double l;
        cin >> n >> l;
        vector<double> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << solve(n, l, 1, a) << "\n";
    }
    return 0;
}

