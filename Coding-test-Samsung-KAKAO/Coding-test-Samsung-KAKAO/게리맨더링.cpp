//#include<iostream>
//#include<queue>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N;
//int p[11];
//bool ch[11];
//bool visited[11];
//vector<int>area[11];
//int total = 0;
//int mini = 100000;
//
//
//queue<int>Q;
//int  BFS(int start) {
//	int ans;
//	int current = 0;
//
//	bool tvisited[11];
//	for (int i = 1; i <= N; i++) {
//		tvisited[i] = visited[i];
//	}
//
//
//	while (!Q.empty()) {
//		current = Q.front();
//		Q.pop();
//		for (int i = 0; i < area[current].size(); i++) {
//			if (!tvisited[area[current][i]]) {
//				tvisited[area[current][i]] = true;
//				Q.push(area[current][i]);
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		if (!tvisited[i]) {
//			return ans = 1;
//		}
//		else {
//			continue;
//		}
//	}
//
//	return ans = 0;
//
//
//}
//
//
//void DFS(int start,int sum) {
//	int flag;
//	for (int i = 1; i <= N; i++) {
//		if (!visited[i]) {
//			printf("!visited[i] : !visited[%d]\n\n", i);
//			Q.push(i);
//			 flag = BFS(i);
//			if (flag == 1) {
//				break;
//				return;
//			}
//			else {
//				mini = min(mini, total - sum);
//				printf("current mini : %d\n\n", mini);
//				break;
//			}
//		}
//	}
//	if (flag == 1) {
//		flag = 0;
//		return;
//	}
//	else {
//		for (int i = 0; i < area[start].size(); i++) {
//			if (!visited[area[start][i]]) {
//				printf("!visited[area[start][i]] : !visited[%d]\n\n", area[start][i]);
//				visited[area[start][i]] = true;
//				sum += p[area[start][i]];
//				printf("DFS(%d,%d)\n\n", area[start][i], sum);
//				DFS(area[start][i], sum);
//			}
//		}
//	}
//	
//
//
//}
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> p[i];
//	}
//	for (int i = 1; i <= N; i++) {
//		total += p[i];
//		
//	}
//
//
//	for (int i = 1; i <= N; i++) {
//		int repeat, input;
//
//		cin >> repeat;
//		for (int j = 0; j < repeat; j++) {
//			cin >> input;
//			area[i].push_back(input);
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		printf("%d : ", i);
//		for (int j = 0; j < area[i].size(); j++) {
//			printf("%d ", area[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	visited[1] = true;
//	printf("DFS(%d,%d)\n\n", 1, p[1]);
//	DFS(1,p[1]);
//	
//
//	if (mini == 100000) {
//		printf("-1");
//	}
//	else {
//		printf("%d ", mini);
//	}
//}