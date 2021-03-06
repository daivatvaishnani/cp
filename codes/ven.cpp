#include <bits/stdc++.h>
using namespace std;

#define msg(s) cout<<s<<"\n"
#define fio freopen("in","r",stdin);freopen("out","w",stdout)
#define fastio ios_base::sync_with_stdio(false)
#define loop(n) int n;cin>>n;while(n--)
#define Loop(n) while(n--)
#define rep(i, a, b)    for (__typeof (a) i = (a) ; i <= b ; ++i)
#define rep(i, a, b)    for (__typeof (a) i = (a) ; i <= b ; ++i)
#define rrep(i, a, b)   for (__typeof (a)i = (b) ; i >= a ; --i)
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

double c[10055];
double v[10055];
double t[10055];
double n,x;

int abs(int x) {
	return x>0 ? x : -x;
} 

int main() {
	fastio;
	// fio;
	cin>>n>>x;
	rep(i,0,n-1) {
		cin>>c[i];
	}
	rep(i,0,n-1) {
		cin>>v[i];
	}
	rep(i,0,n-1) {
		t[i] = abs(c[i]-x)/v[i]; 	
	}
	// rep(i,0,n-1) {
	// 	cout<<t[i]<<"\n";
	// }
	int min = 0;
	int count=0;
	rep(i,1,n-1) {
		if(t[i]<t[min]) {
			count=0;
			min=i;
			continue;
		}
		if(t[i]==t[min]) {
			count++;
		}
	}
	if(count!=0) {cout<<"-1\n";}
	else cout<<min<<"\n";
}