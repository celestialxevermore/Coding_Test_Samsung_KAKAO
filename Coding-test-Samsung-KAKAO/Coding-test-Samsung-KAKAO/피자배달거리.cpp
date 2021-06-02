//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//int map[51][51];
//bool visited[51][51];
//int N, M;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int check[12];
//
//
//int pizcnt = 0;
//
//typedef struct piz {
//	int x;
//	int y;
//	int cnt = 0;
//
//	piz(int a, int b,int c) {
//		x = a;
//		y = b;
//		cnt = c;
//	}
//
//
//}P;
//vector<P>pizza;
//queue<P>Q;
//int ans = 100000;
//void BFS() {
//
//	int currentans = 0;
//
//	P current(0, 0,0);
//
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		//printf("start : %d %d %d\n\n", current.x, current.y, current.cnt);
//		if (map[current.x][current.y] == 1) {
//			visited[current.x][current.y] = true;
//			currentans =currentans+current.cnt;
//			//printf("currentans : %d\n\n", currentans);
//		}
//
//		else {
//			for (int i = 0; i < 4; i++) {
//
//				int x = current.x + dx[i];
//				int y = current.y + dy[i];
//				int c = current.cnt + 1;
//				
//				if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y]) {
//
//					if (map[x][y] == 2) {
//						continue;
//					}
//
//					else {
//						//printf("asdasda x : %d y : %d c : %d\n\n", x, y, c);
//						visited[x][y] = true;
//
//						P next(x, y, c);
//						Q.push(next);
//					}
//					
//					
//
//
//
//				}
//
//
//
//
//			}
//		}
//
//		
//
//	}
//
//	ans = min(ans, currentans);
//
//
//
//
//}
//
//
//void combi(int start,int level) {
//
//	if (level == M) {
//		for (int i = 0; i < M; i++) {
//			
//			visited[pizza[check[i]].x][pizza[check[i]].y] = true;
//			//printf("%d %d\n", pizza[check[i]].x, pizza[check[i]].y);
//			Q.push(pizza[check[i]]);
//			
//		}
//		BFS();
//		//printf("\n\n");
//		//ÃÊ±âÈ­
//		for (int i = 1; i < 51; i++) {
//			for (int j = 1; j < 51; j++) {
//				visited[i][j] = false;
//			}
//		}
//
//
//	}
//	else {
//
//		for (int i = start; i < pizcnt; i++) {
//			check[level] = i;
//
//			combi(i + 1, level + 1);
//			
//		}
//
//
//
//	}
//
//
//
//}
//
//
//
//
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			map[i][j] = input;
//			if (input == 2) {
//				pizcnt++;
//				pizza.push_back(P(i, j,0));
//			}
//		}
//	}
//
//	combi(0,0);
//
//
//	printf("%d", ans);
//}