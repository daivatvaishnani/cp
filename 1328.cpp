/**
* Problem Link: 
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        if(a % b == 0) {
            cout << 0 << "\n";
        } else {
            cout << b - (a % b) << "\n";
        }
    }
    return 0;
}