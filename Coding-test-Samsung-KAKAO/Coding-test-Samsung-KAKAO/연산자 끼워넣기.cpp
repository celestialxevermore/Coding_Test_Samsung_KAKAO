//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int n;
//int numbers[11];
//int op[4];
//
//int mini = 0x7fffffff;
//int maxi = -1 * mini;
//
//void dfs(int result, int count) {
//	if (count == n - 1) {
//		if (mini > result) {
//			mini = result;
//		}
//		if (maxi < result) {
//			maxi = result;
//		}
//		return;
//	}
//
//	else {
//		for (int i = 0; i < 4; i++) {
//			if (op[i] != 0) {
//				op[i]--;
//				switch (i) {
//				case 0:
//					dfs(result + numbers[count + 1], count + 1); break;
//				case 1:
//					dfs(result - numbers[count + 1], count + 1); break;
//				case 2:
//					dfs(result * numbers[count + 1], count + 1); break;
//				
//				case 3:
//					dfs(result / numbers[count + 1], count + 1); break;
//				}
//					
//
//
//				op[i]++;
//			}
//		}
//	}
//
//
//}
//
//
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> numbers[i];
//	}
//
//
//	for (int i = 0; i < 4; i++) {
//		cin >> op[i];
//	}
//
//	dfs(numbers[0], 0);
//
//	printf("%d\n%d\n", maxi, mini);
//}