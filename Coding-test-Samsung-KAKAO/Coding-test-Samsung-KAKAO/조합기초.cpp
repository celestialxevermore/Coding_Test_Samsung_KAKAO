//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//
//int n, r;
//int ch[20];
//
//void DFS(int s, int L) {
//	if (L == r) {
//		for (int i = 0; i < L; i++) {
//			printf("%d ", ch[i]);
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = s; i < n; i++) {
//			ch[L] = i;
//			DFS(i + 1, L + 1);
//		}
//	}
//}
//
//int main() {
//	
//	cin >> n >> r;
//	DFS(0, 0);
//
//}