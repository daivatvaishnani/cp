#include <bits/stdc++.h>

using namespace std;

long long N;
const long long MAXN = 50001;
const long long INF = 1e9;
vector<long long> V;
long long A[MAXN], PRE[MAXN], T[2*MAXN];

long long MINin(long long l, long long r) {
	long long res = INF;
	for (l += N, r += N; l < r; l >>= 1, r >>= 1) {
		if (l&1) res = min(res, T[l++]);
		if (r&1) res = min(res, T[--r]);
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> N;
	int k;
	cin >> k;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	PRE[0] = A[0];
	for(int i = 1; i < N; ++i) {
		PRE[i] = PRE[i - 1] ^ A[i];
	}
	for(int i = 0; i < N; ++i) {
		T[i + N] = A[i];
	}
	for (int i = N - 1; i >= 1; --i) T[i] = min(T[i<<1], T[i<<1|1]);
	for(int l = 0; l < N; ++l) {
		for(int r = l; r < N; ++r) {
			long long MIN = MINin(l, r + 1), XOR;
			if(l == 0) {
				XOR = PRE[r];
			}
			else {
				XOR = PRE[r]^PRE[l - 1];
			}
			sort(V.begin(), V.end());
			V.push_back(MIN * XOR);
		}
	}
	cout << V[k - 1] << "\n";
	return 0;
}