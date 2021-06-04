//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//typedef struct shark {
//	int x;
//	int y;
//	int time;
//}S;
//int n;
//int map[21][21];
//int shark_size, shark_eat;
//
//S shark;
//
//
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 9) {
//				shark.x = i;
//				shark.y = j;
//				shark.time = 0;
//				shark_size = 2, shark_eat = 0;
//				map[i][j] = 0;
//			}
//		}
//	}
//
//
//
//	bool is_update = true;
//	while (is_update) {
//		is_update = false;
//
//		bool visited[21][21] = { false, };
//		queue<S>Q;
//		visited[shark.x][shark.y] = true;
//		Q.push(shark);
//
//		int dx[4] = { 1,-1,0,0 };
//		int dy[4] = { 0,0,1,-1 };
//
//		//상어가 먹을 수 있는 물고기가 여러개 나올 수 있음
//		S candi;
//		candi.x = 20, candi.time = -1;
//
//		while (!Q.empty()) {
//
//			S cur = Q.front();
//			Q.pop();
//
//			//가장 가까운 것은 이미 잡음
//			if (candi.time != -1 && candi.time < cur.time) {
//				break;
//			}
//			if (map[cur.x][cur.y] < shark_size && map[cur.x][cur.y]!=0) {
//				is_update = true;
//				if (candi.x > cur.x || (candi.x == cur.x && candi.y > cur.y)) {
//					candi = cur;
//				}
//
//			}
//
//
//			for (int i = 0; i < 4; i++) {
//				S next;
//				next.x = cur.x + dx[i];
//				next.y = cur.x + dy[i];
//				next.time = cur.time + 1;
//				if (next.x >= 1 && next.x <= n && next.y >= 1 && next.y <= n && !visited[next.x][next.y] && shark_size >= map[next.x][next.y]) {
//					visited[next.x][next.y] = true;
//					Q.push(next);
//				}
//			}
//
//		}
//
//		if (is_update) {
//			shark_eat++;
//			if (shark_eat == shark_size) {
//				shark_size++;
//				shark_eat = 0;
//			}
//			map[shark.x][shark.y] = 0;
//		}
//
//	}
//	printf("%d\n", shark.time);
//	
//}