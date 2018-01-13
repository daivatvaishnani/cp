#include <bits/stdc++.h>

using namespace std;

#define PB push_back
#define MP make_pair
#define F first
#define S second

vector<pair<int,int> > arra, arrb;
vector<int> da,db;

bool cmp(pair<int,int> p1,pair<int,int> p2) {
	if(p1.S==p2.S) return p1.F<p2.F;
	else return p1.S<p2.S;
}

inline void clear() {
	arra.clear(),arrb.clear();
	da.clear(),db.clear();
}

bool F(int i,int pa,int pb,bool mode) {
	if(!mode) return (arra[i].F>=pa && arra[i].S>=pb && !da);
	else return (arrb[i].F>=pb && arrb[i].S>=pa && !db);
}

string go(string a,string b,int pa,int pb) {
	string ret="";
	if(pa>=a.size()) while(pb<b.size()) ret+=b[pb++];
	else if(pb>=b.size()) while(pa<a.size()) ret+=a[pa++];
	else {
		int ifa=0,ifb=0;
		while(!F(ifa,pa,pb,0)) ++ifa;
		while(!F(ifb,pa,pb,1)) ++ifb;
		cout<<ifa<<" "<<ifb<<"\n";
		if(arra[ifa].F-pa<arrb[ifb].F-pb) {
			da[ifa]=1;
			while(pb<arrb[ifb].F) ret+=b[pb++];
			while(pa<arra[ifa].F) ret+=a[pa++];
			
		}
		else {
			db[ifb]=1;
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	int t;
	cin>>t;
	while(t--) {
		clear();
		int tn,tm;
		string ta,tb;
		cin>>tn>>tm>>ta>>tb;
		string a="",b="";
		a+=ta[0],b+=tb[0];
		int pa=0,pb=0;
		for(int i=1; i<tn; ++i) if(ta[i]!=a[pa]) a+=ta[i],++pa;
		for(int i=1; i<tm; ++i) if(tb[i]!=b[pb]) b+=tb[i],++pb;
		int n=a.size(),m=b.size();
		cout<<ta<<" "<<tb<<"\n"<<a<<" "<<b<<"\n";
		for(int i=0; i<n; ++i) for(int j=0; j<m; ++j) if(b[j]==a[i]) arra.PB(MP(i,j)),da.PB(0);
		for(int i=0; i<m; ++i) for(int j=0; j<n; ++j) if(a[j]==b[i]) arrb.PB(MP(i,j)),db.PB(0);
		sort(arra.begin(),arra.end(),cmp);
		sort(arrb.begin(),arrb.end(),cmp);
		cout<<"arra:\n";
		for(auto p:arra) cout<<p.F<<" "<<p.S<<"\n";
		cout<<"arrb:\n";
		for(auto p:arrb) cout<<p.F<<" "<<p.S<<"\n";	
		// string c1=go(a,b,pa,pb);
		// fill(da.begin(),da.end(),0);
		// fill(db.begin(),db.end(),0);
	}
	return 0;
}