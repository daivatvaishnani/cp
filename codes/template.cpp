#include <bits/stdc++.h>
using namespace std;

#define msg(s) cout<<s<<"\n"
#define fio freopen("in","r",stdin);freopen("out","w",stdout)
#define fastio ios_base::sync_with_stdio(false)
#define loop(n) int n;cin>>n;while(n--)
#define Loop(n) while(n--)
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

set<pair<string,string> > s;
multiset<string> ms;
map<string,string> m;
multimap<string,string> mm;
// unordered_map<string,string> us;

int main() {
    fio;
    s.insert(mp("set","s"));
    s.insert(mp("multisetl","ms"));
    s.insert(mp("map","m"));
    s.insert(mp("multimap","mm"));
    s.insert(mp("unordered_set","s"));
    s.insert(mp("unordered_map","um"));
    s.insert(mp("pair","p"));
    s.insert(mp("pii","-"));
    s.insert(mp("piii","-"));
    s.insert(mp("set","s"));

    set<pair<string,string> >::iterator i= s.find(mp("set","s"));
    if(i==s.end()) cout<<"yes\n";
    else cout<<"no\n";
    // repstl(i,s) {
    // 	cout<<(*i).ff<<"->"<<(*i).ss<<"\n";
    // }
    return 0;
}