//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int> map[10000];
//int res[1000];
//int maxi = -1;
//bool visited[1000];
//void DFS(int level, int start) {
//	
//	for (int i = 0; i < map[start].size(); i++) {
//		if (!visited[map[start][i]]) {
//			visited[map[start][i]] = true;
//			DFS(level + 1, map[start][i]); 
//		}
//	}
//
//}
//
//int main() {
//
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N+1; i++) {
//		int snode, tnode;
//		cin >> snode >> tnode;
//
//		map[snode].push_back(tnode);
//	}
//	printf("%d", map[1][0]);
//
//	for (int i = 0; i <= 100; i++) {
//		if (!map[i].empty()) {
//			visited[i] = true;
//			DFS(0, i);
//		}
//	}
//	
//
//}