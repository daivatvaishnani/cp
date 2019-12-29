#include <bits/stdc++.h>

using namespace std;

string solve(int zeros, int ones) {
    string ans = "soe";
    if(zeros > ones + 1 || ones > 2*(zeros + 1)) {
        return "-1";
    }
      
    return ans;
}

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int zeros, ones;
    cin >> zeros >> ones;
    cout << solve(zeros, ones) << "\n";
    return 0;
}
