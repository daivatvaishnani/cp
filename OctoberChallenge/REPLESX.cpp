#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ":" << (x) << " | "

int solve(vector<int> &arr, int n, int x, int p, int k) {
    int ans = -1;
    dbg(n), dbg(x), dbg(p), dbg(k), cout << "\n";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << "\n";
    return ans;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, x, p, k;
        cin >> n >> x >> p >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        cout << solve(arr, n, x, p, k) << "\n---------\n";
    }
    return 0; 
}

