//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//
//using namespace std;
//
//int maxi = -1;
//int candi = 0;
//int level1total = 0;
//int map[501][501];
//bool visited[501][501];
//int n, m;
//typedef struct Node {
//	int x;
//	int y;
//	
//	Node(int a, int b) {
//		x = a;
//		y = b;
//	
//	}
//}N;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//void DFS(int level, Node start, int total) {
//
//	if (level == 3) {
//		//printf("<<<<<<<<candi : %d>>>>>>>>\n\n", total);
//		candi = max(candi, total);
//		candi = max(candi, level1total);
//		level1total = 0;
//		return;
//
//	}
//
//	else {
//
//
//
//		Node cur(0,0);
//		cur = start;
//		
//		
//		for (int i = 0; i < 4; i++) {
//			int x = cur.x + dx[i];
//			int y = cur.y + dy[i];
//
//			if (x >= 1 && y >= 1 && x <= n && y <= m && !visited[x][y]) {
//				int nexttotal = total + map[x][y];
//				//printf("nexttotal : %d total : %d map[x][y] : %d\n\n", nexttotal, total, map[x][y]);
//				visited[x][y] = true;
//				Node next(0,0);
//				next.x = x;
//				next.y = y;
//				//printf("level : %d x : %d y : %d total : %d \n\n",level+1, next.x, next.y,nexttotal);
//				DFS(level + 1, next, nexttotal);
//				visited[next.x][next.y] = false;
//			}
//
//
//		}
//
//	}
//
//}
//queue<Node>Q;
//
//int BFS(Node start,int total) {
//	int ret = 0;
//	int curtotal = total;
//	for (int i = 0; i < 4; i++) {
//		int x = start.x + dx[i];
//		int y = start.y + dy[i];
//		curtotal += map[x][y];
//	}
//	int candi = 0;
//	for (int i = 0; i < 4; i++) {
//		int x = start.x + dx[i];
//		int y = start.y + dy[i];
//		candi = max(candi, curtotal - map[x][y]);
//	}
//
//	return ret = candi;
//}
//
//int main() {
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> map[i][j];
//
//
//			
//
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		
//		for (int j = 1; j <= m; j++) {
//
//			int cursum = 0;
//			cursum = map[i][j];
//			
//			visited[i][j] = true;
//			Node start(i, j);
//			//printf("<<<<<<<<<<<DFS x : %d y : %d cursum : %d>>>>>>>>>>>>\n\n", i, j,cursum);
//			DFS(0, start, cursum);
//			
//			maxi = max(maxi, candi);
//			candi = 0;
//			//printf("<<<cur maxi : %d>>>\n\n", maxi);
//			for (int i = 1; i <= n; i++) {
//				for (int j = 1; j <= m; j++) {
//					visited[i][j] = false;
//				}
//			}
//		}
//	}
//	int maxi1 = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			int candi = 0;
//			Node start(i, j);
//			Q.push(start);
//			candi = BFS(start,map[i][j]);
//
//			maxi1 = max(maxi1, candi);
//
//
//		}
//	}
//
//	int realmaxi = 0;
//
//	realmaxi = max(maxi, maxi1);
//
//
//	printf("%d", realmaxi);
//}
//
//
//
//
