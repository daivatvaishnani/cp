/**
* Problem Link: https://www.codechef.com/OCT20A/problems/POSAND
*/
#include <bits/stdc++.h>

using namespace std;

#define dbg(x) cout << #x << ": " << (x) << "| "

const int maxn = 1e6;

vector<int> arr(maxn+1, -1);

void sanity(vector<int> &arr) {
	for(int i = 0; i < arr.size()-1; ++i) {
		assert((arr[i] & arr[i+1]) > 0);
	}
}

void output(vector<int> arr) {
	if(arr.empty()) {
    	cout << "-1";
    } else {
    	sanity(arr);
    	for(int i : arr) {
    		cout << i << " ";
    	}
    }
    cout << "\n";
}

void test_case() {
    int n;
    cin >> n;
    if(n == 1) {
    	output({1});
    	return;
    }
    if(n == 1 << (int)log2(n)) {
    	output({});
    	return;
    }
    output(vector<int> (arr.begin() + 1, arr.begin() + n + 1));
}

void constructArray() {
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 1;
	int current = 4;
	int id = 4;
	while(id <= maxn) {
		if(floor(log2(current)) == log2(current)) {
			arr[id] = current+1;
			arr[id+1] = current;
			id++, current++;
		} else {
			arr[id] = current;
		}
		id++, current++;
	}
}

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    constructArray();
    while(t--) {
        test_case();
    }
    return 0;
}