//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <climits>
//#include <queue>
//using namespace std;
//
//
//char maze[105][105];
//int N, n;
//void find(int r, int c, int e);
//int cnt;
//int minV;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while(TC--) {
//		int sr, sc;
//		minV = 10000;
//		cin >> N >> n;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < N; j++) {
//				cin >> maze[i][j];
//				if (maze[i][j] == 'S') {
//					sr = i;
//					sc = j;
//				}
//			}
//		}
//		find(sr, sc, 0);
//		if (minV == 10000) {
//			minV = 1; // 도착못하는 경우 0을 출력하기 위해.. 
//		}
//		printf("%d\n", minV - 1); // 지나온 칸에서 출발점 제외 
//	}
//	return 0;
//}
//
//void find(int r, int c, int e) {
//	int dr[] = { 0, 1, 0, -1 };
//	int dc[] = { 1, 0, -1, 0 };
//	int nr, nc;
//
//	if (maze[r][c] == 'E') {
//		if (minV > e) {
//			minV = e;
//		}
//	}
//	else {
//		maze[r][c] = '#'; // 지나간 칸은 벽으로 변경 
//		for (int i = 0; i < 4; i++) {
//			nr = r + dr[i];
//			nc = c + dc[i];
//			if (maze[nr][nc] != '#') {
//				find(nr, nc, e + 1);
//			}
//		}
//		maze[r][c] = 0;
//	}
//}