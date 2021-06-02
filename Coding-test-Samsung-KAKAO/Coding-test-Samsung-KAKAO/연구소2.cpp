//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//int map[51][51];
//
//bool visited[51][51];
//int dx[4] = { 1,0,-1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//int N, M;
//int mini = -1;
//int ans = 100000;
//typedef struct virus {
//	int x;
//	int y;
//	int time = 0;
//	
//}V;
//
//queue<V>Q;
//V viruslist[51];
//int viruscnt = 0;
//int realflag = 0;
//int check[51];
//
//void BFS() {
//	int currentmaxi = -1;
//	int time_ = 0;
//	int tmpmap[51][51] = { 0, };
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			input = map[i][j];
//			if (input == 1) {
//				tmpmap[i][j] = input - 5;
//			}
//			else {
//				tmpmap[i][j] = map[i][j];
//			}
//			
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		tmpmap[viruslist[check[i]].x][viruslist[check[i]].y] = -1;
//	}
//	/*printf("start \n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", tmpmap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");*/
//
//	V current;
//	while (!Q.empty()) {
//
//		current.x = Q.front().x;
//		current.y = Q.front().y;
//		current.time = Q.front().time;
//		Q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int x = current.x + dx[i];
//			int y = current.y + dy[i];
//			int t = current.time + 1;
//
//
//			if (x >= 1 && y >= 1 && x <= N && y <= N && !visited[x][y] && tmpmap[x][y] != -4) {
//				visited[x][y] = true;
//				tmpmap[x][y] = t;
//				V next;
//				next.x = x;
//				next.y = y;
//				next.time = t;
//				Q.push(next);
//			}
//
//		}
//
//
//
//
//	}
//	/*printf("\n\n");
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			printf("%d ", tmpmap[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");*/
//
//
//
//	int flag = 0;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (tmpmap[i][j] == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 1) {
//			realflag = 1;
//			break;
//		}
//	}
//	
//
//	if (flag == 0) {
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				currentmaxi = max(currentmaxi, tmpmap[i][j]);
//			}
//		}
//
//		//printf("current maxi : %d\n\n", currentmaxi);
//		ans = min(ans, currentmaxi);
//	}
//	
//}
//
//void DFS(int start, int level) {
//
//	if (level == M) {
//		
//		
//		for (int i = 0; i < level; i++) {
//			Q.push(viruslist[check[i]]);
//			visited[viruslist[check[i]].x][viruslist[check[i]].y] = true;
//		}
//		/*for (int i = 0; i < level; i++) {
//			printf("x : %d y : %d \n", viruslist[check[i]]);
//		}
//		printf("\n");*/
//		BFS();
//		
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				visited[i][j] = false;
//			}
//		}
//
//	}
//	else {
//		//0 1 2 / 0 1 3 ÀÌÁö¶ö
//		for (int i = start; i < viruscnt; i++) {
//			check[level] = i;
//
//			DFS(i + 1, level + 1);
//		}
//	}
//
//
//}
//
//
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			int input;
//			cin >> input;
//			map[i][j] = input;
//			if (input == 2) {
//				V input;
//				input.x = i;
//				input.y = j;
//				input.time = 0;
//				viruslist[viruscnt++] = input;
//			}
//		}
//	}
//	
//	DFS(0, 0);
//
//	if (ans == 100000) {
//		printf("-1");
//	}
//	else if (ans == -1) {
//		printf("0");
//	}
//	else {
//		printf("%d", ans);
//
//	}
//		
//	
//
//
//}
//
