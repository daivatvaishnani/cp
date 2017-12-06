#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define push_back pb
#define make_pair mp
#define first f
#define second s
#define rep(i,a,b) for(auto i=a; i<=b; ++i)
#define tc(t) int t;cin>>t;while(t--)  
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define fio freopen("in","r",stdin);freopen("out","w",stdout);
const ll mod = 1e9+7;
const ll N = 1e5+5;
ll a,b,n;
int main() {
	fio;
	fastio;
	tc(t) {
		cin >> a >> b >> n;
		if(b==0) cout << "1\n";
		else {
			ll x=2, pos=b;
			while(pos+b<n)  ++x, pos+=b; 
			cout << x << "\n";
		}
	}
	return 0;
}