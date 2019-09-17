vector<vector<int>>d;
void warshall_floyd(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
			}
		}
	}
}