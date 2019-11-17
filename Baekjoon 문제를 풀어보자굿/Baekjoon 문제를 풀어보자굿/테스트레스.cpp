///// 1052 Maze Problem
//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <queue>
//using namespace std;
//
///*
//
//		좌 : [Y][X -1]
//		상 : [Y -1][X]
//		우 : [Y][X +1]
//		하 : [Y +1][X]
//
//*/
//
//int PX[] = { 0, -1, 0, 1 };
//int PY[] = { -1, 0, 1, 0 };
//
//struct position {
//	position(int x, int y, int d) {
//		X = x;
//		Y = y;
//		Distance = d;
//	}
//	int Y;
//	int X;
//	int Distance;
//};
//
//
//int findingWay(int sx, int sy, position startPos, char(& maze)[105][105]) {
//	queue<position> pos;
//	pos.push(startPos);
//
//	position posNow = pos.front();
//	while (pos.empty() == false) {
//		posNow = pos.front();
//		pos.pop();
//
//		if (maze[posNow.Y][posNow.X] == 'E') {
//			return posNow.Distance;
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int ty = PY[i] + posNow.Y;
//			int tx = PX[i] + posNow.X;
//
//			if ((0 <= tx && tx < sx) && (0 <= ty && ty <= sy)) {
//				if (maze[ty][tx] == '-' || maze[ty][tx] == 'E') {
//					if (maze[posNow.Y][posNow.X] != '#') {
//						maze[posNow.Y][posNow.X] = '#';
//						position tmp(tx, ty, posNow.Distance + 1);
//						pos.push(tmp);
//					}
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int x, y;
//
//		cin >> y >> x;
//		position p(0,0,0);
//
//		char maze[105][105] = { 0, } ;
//
//		for (int i = 0; i < y; i++) {
//			cin >> maze[i];
//			for (int j = 0; j < x; j++) {
//				if (maze[i][j] == 'S') {
//					p = position( j,i,0);
//				}
//			}
//		}
//		int result = findingWay(x, y, p, maze);
//		if (result == -1) {
//			cout << "-1\n";
//		}
//		else {
//			cout << result << endl;
//		}
//
//	}
//}