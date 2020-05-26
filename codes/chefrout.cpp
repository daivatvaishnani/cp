#include <bits/stdc++.h>
using namespace std;
#define time cout << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n"	
#define msg(s) cout<<s<<"\n"
#define fio freopen("in","r",stdin);freopen("out","w",stdout)
#define fastio std::ios_base::sync_with_stdio(false)
#define loop(n) int n;cin>>n;while(n--)
#define Loop(n) while(n--)
#define rep(i, a, b)    for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rrep(i, a, b)   for (__typeof (b)i = (b) ; i >= a ; --i)
#define repstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define empty empty()
#define size size()
#define clear clear()
#define pi acos(-1.0)
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
typedef long long ll;
typedef long double lf;
typedef std::vector<int> vi;
typedef std::vector<char> vc;
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii;
const ll mod = 1e9+7;
const int N = 19;
ll ni,si,d,mul,flag;
ll n[N], s[N];
void solve(int i) {
	
}

int main() {
	fio;
	fastio;
	cin>>ni>>si;
	rep(i,1,18) {
		d = pow(10, 18-i);
		n[i] = ni / d;
		s[i] = si / d;
		ni = ni % d;
		si = si % d;
	}
	rep(i,1,18) {
		cout<<n[i]<<" ";
	}cout<<"\n";
	rep(i,1,18) {
		cout<<s[i]<<" ";
	}cout<<"\n";
	mul=1;
	flag=0;
	int index=1;
	while(n[index]==0) {++index;}
	rep(i,index,18) {
		if(flag==0) {
			mul = (mul%mod * (n[i]-s[i])%mod)%mod;
			flag = 1;
		}
		else {
			mul = (mul%mod * (n[i] + 1)%mod)%mod;
		}
	}
	cout<<mul<<"\n";
}	