/**
* Problem Link: 
*/
#include <bits/stdc++.h>

using namespace std;

void printArray(vector<long long> &arr) {
    for(long long i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool isTriangle(vector<long long> &arr) {
    long long a = arr[0], b = arr[1], c = arr[2];
    if(a + b > c && a + c > b && b + c > a) {
        return true;
    }
    return false;
}

vector<long long> findTrianglePair(vector<long long> &num) {
    long long n = num.size();
    for(long long i = 0; i < n; ++i) {
        for(long long j = 0; j < n; ++j) {
            for(long long k = 0; k < n; ++k) {
                vector<long long> ans;
                ans.push_back(num[i]);
                ans.push_back(num[j]);
                ans.push_back(num[k]);
                if(isTriangle(ans)) {
                    return ans;
                }
            }
        }
    }
    return {};
}

void test_case(long long case_no) {
    vector<long long> num(4);
    for(long long i = 0; i < num.size(); ++i) {
        cin >> num[i];
    }
    vector<long long> ans = findTrianglePair(num);
    if(!ans.empty()) {
        sort(ans.begin(), ans.end());
    } else {
        ans.push_back(num[1]);
        ans.push_back(num[2]);
        ans.push_back(num[2]);
    }
    assert(isTriangle(ans) == true);
    printArray(ans);
}

int main() {
    freopen("in", "r", stdin), freopen("out", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long t;
    cin >> t;
    for(long long i = 1; i <= t; ++i) {
        test_case(i);
    }
    return 0;
}