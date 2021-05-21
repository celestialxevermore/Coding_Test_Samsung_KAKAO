//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//
//
//int res[100000];
//int main() {
//
//	string a;
//
//	cin >> a;
//	int sum = 0;
//	if (a[0] == 'X') {
//		res[0] = -1;
//	}
//	else {
//		res[0] = 1;
//
//	}
//
//	for (int i = 1; i < a.size(); i++) {
//		if (a[i - 1] == a[i]&&a[i-1]=='X') {
//			res[i] = res[i - 1] - 1;
//		}
//		if (a[i - 1] != a[i] && a[i] == 'X') {
//			res[i] = -1;
//		}
//		if (a[i - 1] == a[i] && a[i - 1] == 'O') {
//			res[i] = res[i - 1] + 1;
//		}
//		if (a[i - 1] != a[i] && a[i] == 'O') {
//			res[i] = 1;
//		}
//	}
//	
//	/*for (int i = 0; i < a.size(); i++) {
//		printf("%d ", res[i]);
//	}*/
//	int front = 0, end = 0;
//	
//	int total[100][1000];
//	int maxi = -1;
//	for (int i = 0; i < a.size(); i++) {
//		int cursum = 0;
//		vector<int>tmp(1000);
//		for (int j = i; j < a.size(); j++) {
//			cursum += res[j];
//			tmp[j] = cursum;
//		}
//		int mm = -1000;
//		for (int k = 0; k < a.size(); k++) {
//			if (mm < tmp[k]) {
//				mm = tmp[k];
//			}
//		}
//
//
//		if (maxi < mm) {
//			maxi = mm;
//		}
//
//	}
//
//	printf("%d", maxi);
//}