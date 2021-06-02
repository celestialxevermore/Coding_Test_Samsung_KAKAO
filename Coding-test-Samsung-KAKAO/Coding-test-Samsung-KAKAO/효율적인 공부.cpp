//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 1000001
//using namespace std;
//
//int N, M, R;
//
//int study[4][MAX];
//int maxi = -1;
//void DFS(int start, int end, int rest, int total) {
//
//	if (rest >= N) {
//		maxi = max(maxi, total);
//		return;
//	}
//	else {
//		for (int i = rest; i <= N; i++) {
//			if (study[1][i] != 0) {
//				int nextstart = i;
//				int nextend = study[2][i];
//				int nextrest = study[2][i] + R;
//				int nexttotal = total + study[3][i];
//				//printf("nextstart : %d nextend : %d nextrest : %d nexttotal : %d\n\n", nextstart, nextend, nextrest, nexttotal);
//				DFS(nextstart, nextend, nextrest, nexttotal);
//			}
//		}
//
//
//	}
//}
//
//
//int main() {
//
//	cin >> N >> M >> R;
//
//	for (int i = 0; i < M; i++) {
//		int start, end, value;
//		cin >> start >> end >> value;
//
//		study[1][start] = start;
//		study[2][start] = end;
//		study[3][start] = value;
//	}
//
//	DFS(0, 0, 0, 0);
//	
//	printf("%d", maxi);
//
//}
