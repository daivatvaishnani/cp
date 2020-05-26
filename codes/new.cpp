#include <bits/stdc++.h>
using namespace std;
#define fio freopen("in","r",stdin);freopen("out","w",stdout)
#define fastio ios_base::sync_with_stdio(false)
#define loop(n) int n;cin>>n;while(n--)
#define Loop(n) while(n--)
#define rep(i, a, b)    for (__typeof (a) i = (a) ; i <= b ; ++i)
#define rep(i, a, b)    for (__typeof (a) i = (a) ; i <= b ; ++i)
#define rrep(i, a, b)   for (__typeof (a)i = (b) ; i >= a ; --i)
#define repstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
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

const int N = 100055 ;
const int mod = 1000000007; 

int a[N],b[N],c[N]; 
int sa,sb,sc;
int main() {
	fastio;
	fio;
	loop(t) {
		cin>>sa>>sb>>sc;
		rep(i,1,sa) {
			cin>>a[i];
		}
		rep(i,1,sb) {
			cin>>b[i];
		}
		rep(i,1,sc) {
			cin>>c[i];
		}
		sort(a,a+sa+1);
		sort(b,b+sb+1);
		sort(c,c+sc+1);
		rep(i,1,sa) {
			cout<<a[i]<<" ";
		}cout<<"\n";
		rep(i,1,sb) {
			cout<<b[i]<<" ";
		}cout<<"\n";
		rep(i,1,sc) {
			cout<<c[i]<<" ";
		}cout<<"\n";
		cout<<"s\n";
	}
}