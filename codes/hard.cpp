#include <bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int (i)=(a);(i) < (b); ++(i))
#define iOS  ios_base::sync_with_stdio
#define fio freopen("in","r",stdin);freopen("out","w",stdout)
typedef long long ll;
const int maxn = 1e5 + 100, mod = 1e9 + 7;
int p[maxn], x[maxn], f[maxn],a,b,n,q;
int main() {
	fio;
	iOS(false);
	cin >> n >> q;
	For(i,0,2)
		cin >> f[i];
	cin >> a >> b;
	For(i,2,maxn)
		f[i] = (1LL * a * f[i-2] + 1LL * b * f[i-1]) % mod;
	For(i,0,n)
		cin >> x[i];
	while(q--){
		int l,r;
		cin >> l >> r;
		-- l;
		-- r;
		if(l < r){
			p[l] = (p[l] + f[0]) % mod;
			p[l+1] = (p[l+1] + f[1])%mod;
			p[l+1] = (1LL * p[l+1] + mod - 1LL * ((1LL * b * f[0])%mod))%mod;
			p[r + 1] = (1LL * p[r+1] + mod - f[r - l + 1])%mod;
			p[r + 2] = (1LL * p[r+2] + mod - 1LL * ((1LL * a * f[r-l])%mod))%mod;
		}
		else{
			p[l] = (p[l] + f[0])%mod;
			p[r+1] = (1LL * p[r+1] + mod - ((1LL * b * f[0])%mod))%mod;
			p[r+2] = (1LL * p[r+2] + mod - 1LL * ((1LL * a * f[0])%mod))%mod;
		}
	}
	For(i,0,n){
		if(i > 1)
			p[i] = (1LL * p[i] + a * p[i-2])%mod;
		if(i)
			p[i] = (1LL * p[i] + b * p[i-1])%mod;
		x[i] = (p[i] + x[i])%mod;
		cout << x[i];
		if(i + 1 < n)
			cout << ' ';
	}
	cout << endl;

}