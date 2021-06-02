#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


typedef struct P {
	int x,y,time;
}POS;
int n, m, ret;
int map[51][51];

int pos_size = 0;
POS pos[11];


int bfs(int pick[]) {

	int empty_count = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (map[i][j] == 0) {
				empty_count++;
			}
			
		}
	}

	queue<POS>Q;

	bool visited[51][51] = { false, };
	for (int i = 0; i < m; i++) {
		Q.push(pos[pick[i]]);
		visited[pos[pick[i]].x][pos[pick[i]].y] = true;
	}
	const int dx[] = { 1,-1,0,0 };
	const int dy[] = { 0,0,1,-1 };
	while (!Q.empty()) {
		POS cur = Q.front();
		Q.pop();

		if (map[cur.x][cur.y] == 0) {
			empty_count--;
		}
		if (empty_count == 0) {
			return cur.time;
		}

		POS next;
		next.time = cur.time + 1;
		for (int i = 0; i < 4; i++) {
			next.x = cur.x + dx[i];
			next.y = cur.y + dy[i];
			
			if (!visited[next.x][next.y]&&map[next.x][next.y]!=1&&next.y >= 1 && next.x >= 1 && next.y <= n && next.x <= n) {
				visited[next.x][next.y] = true;
				Q.push(next);
			}
		}
	}

	return 100000;
}


void dfs(int last_pick, int piccnt, int pick[]) {

	if (piccnt == m) {
		int candi = bfs(pick);
		if (ret > candi) {
			ret = candi;
			
		}
		return;
	}
	else {
		for (int i = last_pick; i < pos_size; i++) {
			pick[piccnt] = i;
			dfs(i+1, piccnt + 1, pick);
		}
	}
}


int main() {

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				pos[pos_size].x = i;
				pos[pos_size].y = j;
				pos[pos_size].time = 0;
				pos_size++;
			}
		}
	}

	ret = 100000;
	int pick[11] = { 0, };
	dfs(0, 0, pick);

	if (ret == 100000) {
		printf("-1");
	}
	else {
		printf("%d", ret);
	}
}
