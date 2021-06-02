//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define N 17
//using namespace std;
//
//
//int team[N][2];
//int n;
//
//int white[N];
//int ans = 10000; 
//
//
//void combi(int start, int level) {
//
//	if (level == n / 2 + 1) {
//		bool visited[N] = { false, };
//		/*printf("white : ");
//		for (int i = 1; i <= n / 2; i++) {
//			printf("%d ", white[i]);
//		}
//		printf("\n");*/
//		for (int i = 1; i <= n / 2; i++) {
//			visited[white[i]] = true;
//		}
//		/*for (int i = 1; i <= n; i++) {
//			if (!visited[i]) {
//				printf("%d ", i);
//			}
//		}*/
//		int ans1 = 0;
//		int ans2 = 0;
//		for (int i = 1; i <= n; i++) {
//			//whiteÆÀ
//			if (visited[i]) {
//				ans1 += team[i][0];
//			}
//			else {
//				ans2 += team[i][1];
//			}
//		}
//		//printf("ans1 : %d ans2 : %d\n\n", ans1, ans2);
//		
//
//		ans = min(ans, abs(ans1 - ans2));
//		
//	}
//	else {
//		for (int i = start; i <=n; i++) {
//			white[level] = i;
//			combi(i + 1, level + 1);
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
//int main() {
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < 2; j++) {
//			cin >> team[i][j];
//		}
//	}
//	
//	combi(1, 1);
//
//	printf("%d", ans);
//
//}
