///// 1052 Maze Problem
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <queue>
//using namespace std;
//
//char maze[105][105];
//
//queue<int>xp;
//queue<int>yp;
//
//int findingWay(int _x, int _y) {
//
//	int positionsX[] = { -1, 0, 1, 0 };
//	int positionsY[] = { 0, -1, 0, 1 };
//
//	int temp1, temp2;
//	int _cnt = 0, noExit = 0;
//
//	while (!xp.empty()) {
//
//		maze[yp.front()][xp.front()] = '-';
//		for (int i = 0; i < 4; i++) {
//			temp1 = yp.front() + positionsY[i];
//			temp2 = xp.front() + positionsX[i];
//		
//			if (maze[temp1][temp2] == '-') {
//				yp.push(temp1);
//				xp.push(temp2);
//			}
//			else if (maze[temp1][temp2] == 'E') {
//				return _cnt;
//			}
//		}
//		_cnt++;
//		yp.pop();
//		xp.pop();
//	}
//	return noExit;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int x, y;
//		cin >> y >> x;
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				cin >> maze[i][j];
//				if (maze[i][j] == 'S') {
//					xp.push(j);
//					yp.push(i);
//				}
//			}
//		}
//		x = xp.front();
//		y = yp.front();
//		int distence = findingWay(x, y);
//		if (distence) {
//			cout << distence << endl;
//		}
//		else {
//			cout << "-1\n";
//		}
//	}
//}