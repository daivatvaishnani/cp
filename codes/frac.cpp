#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define rep(i,a,b) for(__typeof(b) i=a; i<=b; ++i)
#define rrep(i,a,b) for(__typeof(b) i=b; i>=a; --i)
#define tc(t) int t;cin>>t;while(t--)  
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define fio freopen("in","r",stdin);freopen("out","w",stdout);
const ll mod = 1e9+7;
const ll N = 1e5+5;
int main() {
	//fio;
	fastio;
	int n;
	cin >> n;
	int a=1,b=n-1;
	int ma=1, mb=n-1;
	double f=ma/mb;
	while(a<b) {
		if(__gcd(a,b)==1 && max((ma/mb),(a/b))==(a/b)) {
			ma = a;
			mb = b;
		}
		++a;
		--b;
	}
	cout << ma << " " 	<< mb << "\n";
	return 0;
}