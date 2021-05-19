//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[12];
//int ops[4];
//
//typedef struct Node {
//	int cur = 0;
//	int op[4] = { 0, };
//	
//
//}Node;
//int mini = 987654321;
//int maxi = -1000;
//
//void DFS(int level, Node current) {
//	Node next;
//	if (level == N - 1) {
//		maxi = max(current.cur, maxi);
//		mini = min(current.cur, mini);
//		return;
//	}
//	else {
//
//		for (int i = 0; i < 4; i++) {
//			if (current.op[i] != 0) {
//				int next_ = current.op[i] - 1;
//				int index = i;
//				for (int j = 0; j < 4; j++) {
//					next.op[j] = current.op[j];
//				}
//				next.op[index] = next_;
//				
//				switch (index) {
//				case 0:
//					next.cur = current.cur + arr[level + 1]; 
//					DFS(level + 1, next);
//					break;
//
//				case 1:
//					next.cur = current.cur - arr[level + 1]; 
//					DFS(level + 1, next); 
//					break;
//
//				case 2:
//					next.cur = current.cur * arr[level + 1]; 
//					DFS(level + 1, next);
//					break;
//
//				case 3:
//					next.cur = current.cur / arr[level + 1]; 
//					DFS(level + 1, next);
//					break;
//				}
//					
//
//			}
//			else {
//				continue;
//			}
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
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 4; i++) {
//		cin >> ops[i];
//	}
//
//	Node start;
//	start.cur = arr[0];
//	for (int i = 0; i < 4; i++) {
//		start.op[i] = ops[i];
//	}
//	int level = 0;
//
//	DFS(level, start);
//
//
//	printf("%d\n", maxi);
//	printf("%d\n", mini);
//
//}