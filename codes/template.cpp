#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i=a; i<=b; ++i
#define RREP(i, a, b) for(int i=b; i<=a; --i)
#define REPC(i, C) for(auto i:C)
#define PI acos(-1)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SZ(x) ((int)x.size())
#define ALL(C) C.begin(), C.end()
#define RALL(C) C.rbegin(), C.rend()
#define EPS 1e-9
#define INF 1e9

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;

template<typename T, typename U> inline bool EQ(const T &a, const U &b) {return (abs(a-b) <= EPS);}

ll POW(ll a, ll b) {ll ans=1;a = a%mod;while(b>0){if(b&1) ans=(a*ans)%mod;b>>=1;a=(a*a)%mod;}return ans;}

int main() {
	freopen("in", "r", stdin); freopen("out", "w", stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  	return 0;
}