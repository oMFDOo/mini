//#include "myFirstClass.h"
//#include <iostream>
//#include <vector>
//#include <Windows.h>
//#include <time.h>
//#include <cstdlib>
//#include <algorithm>
//#include <conio.h>
//
//using namespace std;
//
//myFirstClass::myFirstClass() {}
//myFirstClass::~myFirstClass() {}
//
//enum color {
//	black, blue, green, skyblue, red,
//	purple, yellow, white, grey, lightBlue,
//	lightGreen, lightSkyblue, lightRed,
//	lightPurple, lightYellow, darkWhite
//};
//
//void setColor(int color, int bgcolor) {
//	color &= 0xf;
//	bgcolor &= 0xf;
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
//}
//
//int main() {
//	myFirstClass birthDay; 
//	birthDay.m_year = 2019;
//	birthDay.m_month = 11;
//	birthDay.m_day = 30;
//	birthDay.print();
//	birthDay.calDay(birthDay.m_day, birthDay.m_year);
//
//	vector<int> array{0, 1, 2};
//	array.resize(10);
//
//	setColor(black, darkWhite);
//
//	cout << "\n\nThe length is: " << array.size() << '\n';
//	cout << "The capacity is: " << array.capacity() << "\n\n\n";
//	
//	setColor(darkWhite, black);
//
//	for (auto const &element : array) {
//		cout << element << ' ';
//	}
//
//	clock_t start, end;
//
//	start = clock();
//
//	int startNum, endNum, resultSum;
//	cin >> startNum >> endNum;
//
//	if (startNum > endNum) {
//		int temp = startNum;
//		startNum = endNum;
//		endNum = temp;
//	}
//
//	cout << "\n";
//
//	int result = 0;
//	for (int i = startNum; i <= endNum; i++) {
//		resultSum = birthDay.yaksu(i);
//		if (resultSum > i) {
//			result++;
//		}
//	}
//	
//	cout << "니가 원하는 답은 : " << result << " 이란다^^";
//	cout << "\n\n계속 입력해라 하하!\n\n";
//
//	while (1) {
//		char hu[50];
//
//
//		if ((clock()-start) / CLOCKS_PER_SEC > 3.0f) {
//			system("cls");
//			setColor(lightRed, black);
//			cout << "\n\n\t\t 성실하지 못 하군 녀석! 제한시간 초과!";
//			setColor(darkWhite, black);
//			break;
//		}
//		else {
//			if (kbhit()) {
//				printf("오호 뭔가 입력중이군\n");
//				printf("%s\n", gets_s(hu, 50));
//
//				printf("한 번 더! \n\n");
//				start = clock();
//			}
//		}
//	}
//
//	end = clock();
//
//	setColor(black, black);
//	return 0; 
//}