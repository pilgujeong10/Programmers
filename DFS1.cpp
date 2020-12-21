#include<iostream>

using namespace std;
int map[30][30]; 
int ch[30];
int cnt=0,n;

void DFS(int v) {
	int i;
	if (v == n) {
		cnt++;
	}
	else {
		for (i = 1; i <= n; i++) {
			if (map[v][i] == 1 && ch[i] == 0) {
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
			}
		}
	}
}

int main() {
	int  m, i, a, b;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		map[a][b] = 1;
	}
	ch[1] = 1;
	DFS(1);
	cout << cnt;
	return 0;
}
