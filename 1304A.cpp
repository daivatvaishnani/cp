#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if((y-x) % (a + b) == 0) {
            cout << (y-x) / (a + b) << "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}