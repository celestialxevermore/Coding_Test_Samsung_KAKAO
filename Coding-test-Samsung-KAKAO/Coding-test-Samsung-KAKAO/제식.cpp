//#include<iostream>
//#include<vector>
//
//
//using namespace std;
//
//
//
//
//int swcnt = 0;
//void swap(int* a, int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//	swcnt++;
//}
//int gocnt = 0;
//void go(int* a, int* b) {
//	
//	gocnt++;
//}
//
//
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	int arr1[1000];
//	int arr2[10000];
//	for (int i = 0; i < N; i++) {
//		cin >> arr1[i];
//		cin >> arr2[i];
//	}
//
//
//
//	for (int i = 0; i < N-1; i++) {
//		if (arr1[i] == arr1[i + 1]) {
//			go(&arr1[i], &arr1[i + 1]);
//		}
//
//		if (arr2[i] < arr2[i + 1]) {
//			swap(&arr2[i], &arr2[i + 1]);
//		}
//
//
//
//	}
//	int ans = gocnt + swcnt;
//
//	printf("%d", ans);
//
//
//
//
//
//}