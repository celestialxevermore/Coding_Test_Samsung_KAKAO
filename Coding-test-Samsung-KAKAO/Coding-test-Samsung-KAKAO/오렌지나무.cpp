//#include<iostream>
//#include<vector>
//#include<algorithm>
//#define MAX 100001
//using namespace std;
//
//int maxi = -1;
//
//
//int W, H, T, S;
//
//vector<pair<int, int>>loc;
//
//int main() {
//
//
//
//	cin >> W >> H >> T >> S;
//
//	vector<int>x, y;
//
//	for (int i = 0; i < T; i++) {
//		int a, b;
//		cin >> a >> b;
//
//		x.push_back(a);
//		y.push_back(b);
//	}
//	for (int i = 0; i < T; i++) {
//		for (int j = 0; j < T; j++) {
//			int c = 0;
//			for (int k = 0; k < T; k++) {
//				if (x[k] >= x[i] && x[k] <= x[i] + S) {
//					if (y[k] >= y[j] && y[k] <= y[j] + S) {
//						c++;
//					}
//				}
//			}
//			maxi = max(maxi, c);
//
//		}
//	}
//
//	printf("%d", maxi);
//	
//}