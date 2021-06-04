//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//typedef struct Node {
//	int x;
//	int y;
//	int cnt = 0;
//}N;
//int n;
//int mini = 10000;
//queue<Node>Q;
//
//int map[51][51];
//bool visited[2500][51][51];
//
//
//int dimension = 0;
//
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int cnt = 0;
//void BFS() {
//	Node cur;
//	while (!Q.empty()) {
//		cur = Q.front();
//		Q.pop();
//		//printf("cur x : %d y : %d cur cnt : %d\n\n", cur.x, cur.y, cur.cnt);
//		if (cur.x == n && cur.y == n) {
//			//printf("<<<<<mini : %d cur cnt : %d>>>>>\n\n",mini, cur.cnt);
//			mini = min(mini, cur.cnt);
//			
//			if (mini < cur.cnt) {
//				cnt++;
//			}
//			if (cnt > 100) {
//				//printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<whdfy>>>>>>>>>>>>>>>>>>>>>>>\n\n");
//				return;
//			}
//		}
//		
//		for (int i = 0; i < 4; i++) {
//			int x = cur.x + dx[i];
//			int y = cur.y + dy[i];
//			int c = cur.cnt + 1;
//			
//			
//			
//			
//			if (x >= 1 && y >= 1 && x <= n && y <= n && !visited[cur.cnt][x][y] && map[x][y] == 1) {
//				
//				
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = cur.cnt;
//				visited[cur.cnt][x][y] = true;
//				//printf("next x : %d y : %d next cnt : %d\n\n", next.x, next.y, next.cnt);
//				
//				Q.push(next);
//				
//			}
//
//
//			if (x >= 1 && y >= 1 && x <= n && y <= n && !visited[cur.cnt][x][y] && map[x][y] == 0) {
//
//				map[x][y] = 1;
//				Node next;
//				next.x = x;
//				next.y = y;
//				next.cnt = cur.cnt+1;
//				visited[next.cnt][x][y] = true;
//				visited[next.cnt][cur.x][cur.y] = true;
//
//				//printf("next x : %d y : %d next cnt : %d\n\n", next.x, next.y, next.cnt);
//				
//				Q.push(next);
//				map[x][y] = 0;
//			}
//
//		}
//
//		
//
//	}
//
//	for (int i = 0; i < 4; i++) {
//		int x = cur.x + dx[i];
//		int y = cur.y + dy[i];
//		int c = cur.cnt + 1;
//
//	}
//
//
//
//}
//
//
//int main() {
//
//	cin >> n;
//	
//	for (int i = 0; i < n; i++) {
//		string input;
//		cin >> input;
//
//		for (int j = 1; j <= n; j++) {
//			map[i + 1][j] = input[j-1];
//			map[i + 1][j] = map[i + 1][j] - '0';
//		}
//	}
//	/*for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("%d ", map[i][j]-'0');
//		}
//		printf("\n");
//	}*/
//
//
//	N start;
//	start.x = 1;
//	start.y = 1;
//	start.cnt = 0;
//	visited[start.cnt][start.x][start.y] = true;
//	Q.push(start);
//	BFS();
//
//
//	if (mini == 10000) {
//		printf("0");
//	}
//	else {
//		printf("%d", mini);
//	}
//}
//
