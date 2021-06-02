//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//
//using namespace std;
//
//int N;
//int minlen = 100000;
//
//vector<string>input(30);
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> input[i];
//	}
//	int flag = 0;
//	
//	string ans = "";
//	for (int i = 0; i < N; i++) {
//		
//		int currentlen = input[i].size();
//		
//		minlen = min(minlen, currentlen);
//	}
//	
//	for (int i = 0; i < minlen; i++) {
//		string minstr = "";
//		for (int j = 0; j < N; j++) {
//			
//			minstr.push_back(input[j][i]);
//		}
//
//		for (int k = 0; k < N-1; k++) {
//			if (minstr[k] == minstr[k + 1]) {
//				continue;
//			}
//			else {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) {
//			ans.push_back(minstr[0]);
//		}
//
//	}
//	cout << ans;
//
//	
//}
