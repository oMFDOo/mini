//#include <iostream>
//#include <vector>
//#include <Windows.h>
//#include <time.h>
//#include <cstdlib>
//#include <algorithm>
//#include <conio.h>
//#include <array>
//
//using namespace std;
//
//// Text Color
//enum color {
//	black, blue, green, skyblue, red,
//	purple, yellow, white, grey, lightBlue,
//	lightGreen, lightSkyblue, lightRed,
//	lightPurple, lightYellow, darkWhite
//};
//
//void gotoxy(short, short);
//void setColor(int, int);
//void drawBoard();
//
//array<int, 90> board;
//vector<vector<int> > arr(90, vector<int>(90, 0));
//
//int main() {
//	int serial = 0;
//
//	//값 출력
//	for (vector<int> vec : arr) {
//		for (int n : vec) {
//			printf("%3d ", n);
//		}
//		cout << endl;
//	}
//}
//
//void drawBoard() {
//	for (int i = 0; i < sizeof(board) / sizeof(int); i++) {
//
//	}
//}
//
//void gotoxy(short x, short y) {
//	COORD pos = { x, y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//
//}
//
//void setColor(int color, int bgcolor) {
//
//	color &= 0xf;
//	bgcolor &= 0xf;
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
//
//}