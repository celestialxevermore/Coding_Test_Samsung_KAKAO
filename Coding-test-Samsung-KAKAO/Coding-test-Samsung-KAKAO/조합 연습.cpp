//#include<iostream>
//#include<vector>
//
//
//using namespace std;
//
//
//
//int arr[101];
//bool ch[101];
//int N, R;
//
//
//void DFS(int cur, int Level) {
//	if (Level == R) {
//		for (int i = 0; i < R; i++) {
//			printf("%d ", ch[i]);
//		}
//		printf("\n");
//
//		return;
//
//
//	}
//	else {
//		for (int i = cur; i < N; i++) {
//			ch[Level] = i;
//			DFS(i+1, Level + 1);
//		}
//
//
//	}
//
//}
//
//
//int main() {
//
//	cin >> N >> R;
//
//	DFS(0, 0);
//
//
//
//
//}
//
