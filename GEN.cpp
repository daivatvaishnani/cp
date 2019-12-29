#include <bits/stdc++.h>

using namespace std;

void go(int a, int b, int c, unordered_set<string> &s, string cur, vector<vector<vector<int> > > &state_frequency) {
	state_frequency[a][b][c]++;
	if(a == 0 && b == 0 && c == 0 && s.find(cur) == s.end()) {
		s.insert(cur);
		return;
	}
	if(a > 0) {
		go(a-1, b, c, s, cur + 'x', state_frequency);
	}
	if(b > 0) {
		go(a, b-1, c, s, cur + 'y', state_frequency);
	}
	if(c > 0) {
		go(a, b, c-1, s, cur + 'z', state_frequency);
	}
}

unordered_set<string> generate(int a, int b, int c) {
	unordered_set<string> s;
	string cur = "";
	vector<vector<vector<int> > > state_frequency(10, vector<vector<int> > (10, vector<int> (10)));
	go(a, b, c, s, cur, state_frequency);
	for(int i = 1; i <= a; ++i) {
		for(int j = 1; j <= b; ++j) {
			for(int k = 1; k <= c; ++k) {
				cout << state_frequency[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	return s;
}

int main() {
	freopen("in", "r", stdin), freopen("out", "w", stdout);
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int a, b, c;
	cin >> a >> b >> c;
	unordered_set<string> valid_strings = generate(a, b, c);
	for(string s : valid_strings) {
		cout << s << "\n";
	}
	return 0;
}
