//#include<iostream>
//#include<queue>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int ans = -1;
//int R, C;
//
//char map[21][21];
//bool visited[91];
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void dfs(int move, char start, int x, int y) {
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//
//
//		if (map[nx][ny] != start && !visited[map[nx][ny] - 0] && nx >= 1 && nx <= R && ny >= 1 && ny <= C) {
//			visited[map[nx][ny] - 0] = true;
//			//printf("move : %d map[nx][ny] : %c nx : %d ny : %d\n\n",move+1,map[nx][ny],nx,ny);
//			dfs(move + 1, map[nx][ny], nx, ny);
//			visited[map[nx][ny] - 0] = false;
//		}
//
//
//	}
//	if (ans < move) {
//		ans = move;
//	}
//
//}
//
//
//
//int main() {
//
//	cin >> R >> C;
//
//
//	for (int i = 0; i < R; i++) {
//		string input;
//		cin >> input;
//
//		for (int j = 1; j <= C; j++) {
//			map[i+1][j] = input[j - 1];
//		}
//	}
//	/*for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			printf("%c ", map[i][j]);
//		}
//		printf("\n");
//	}*/
//	//printf("%d %d ",map[1][1]-0, map[1][1]);
//	visited[map[1][1]-0] = true;
//	dfs(1, map[1][1],1,1);
//
//
//
//
//	printf("%d", ans);
//
//
//}