#include <bits/stdc++.h>

using namespace std;

const int maxnm = 1005; 

int effects[maxnm][maxnm], pathcost[maxnm][maxnm];

bool ok(int x, int y, int n, int m) {
	if(x <= n && x >= 1 && y <= m && y >= 1) return true;
	else return false;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N, M;
		memset(effects, 0, sizeof(effects));
		memset(pathcost, 0, sizeof(pathcost));
		cin >> N >> M;
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				cin >> effects[i][j];
			}
		}
		for(int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				if(effects[i][j] > 0) ++effects[i][j];
			}
		}
		int cnt = 100;
		while(cnt--) {	
			for(int i = 1; i <= N; ++i) {
				for (int j = 1; j <= M; ++j) {
					pathcost[i][j] = effects[i][j];
					if(effects[i][j] != -1) {
						if(ok(i, j + 1, N, M)) {
							pathcost[i][j] = max(pathcost[i][j], pathcost[i][j + 1] - 1);
						}
						if(ok(i + 1, j, N, M)) {
							pathcost[i][j] = max(pathcost[i][j], pathcost[i + 1][j] - 1);
						}
						if(ok(i, j - 1, N, M)) {
							pathcost[i][j] = max(pathcost[i][j], pathcost[i][j - 1] - 1);
						}
						if(ok(i - 1, j, N, M)) {
							pathcost[i][j] = max(pathcost[i][j], pathcost[i - 1][j] - 1);
						}
					}
				}
			}
		}
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= M; ++j) {
				if(pathcost[i][j] == -1) cout << "B";
				else if(pathcost[i][j] > 0) cout << "Y";
				else cout << "N";
			}
			cout << "\n";
		}
	}
	return 0;
}