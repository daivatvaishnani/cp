#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i=a; i<=b; ++i)
#define RREP(i, a, b) for(int i=b; i<=a; --i)
#define REPC(i, C) for(auto i:C)
#define PI acos(-1)
#define F first
#define S second
#define PB push_back
#define MP make_pair
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

const ll maxn = 1e5 + 5;
const ll mod = 1e9 + 7;

template<typename T, typename U> inline bool EQ(const T &a, const U &b) {return (abs(a-b) <= EPS);}
inline ll plus(ll a, ll b) {return (a%mod + b%mod)%mod;}
inline ll minus(ll a, ll b) {return (a%mod - b%mod)%mod;}
inline ll mult(ll a, ll b) {return ((a%mod)*(b%mod))%mod;}

ll ans = 0;

int dp[]

void go(ll n, int p, int q, int s1, int s2, int b1, int b2, int no) {
	
}

int main() {
	freopen("in", "r", stdin); freopen("out", "w", stdout);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int p,q,n,s1,s2,b1,b2;
		cin >> p >> q >> n;
		cin>>s1>>s2>>b1>>b2;
		ans += go(n,p,q,s1,s2,b1,b2,1);
		ans += go(n,p,q,s1,s2,b1,b2,2);
	}
  	return 0;
}