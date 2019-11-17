#include "bookDatas.h"
#include "findString.h"
#include "manageData.h"

#pragma once
using namespace std;

int search() {
	return 0;
}

void searchInfo() {
	
	printSerchType();

	string input;
	cin >> input;
	int type = 1;

	while(true) {
		type = exceptionHandling(input, 0, 2, INT_MIN);
		if (type != -1) {
			break;
		}
	}
	
	//system("cls");
	if (type == 1) {
		cout << "\t검색하실 ";
		setColor(lightYellow, black);
		cout << "도서의 이름";
		setColor(white, black);
		cout << "을 입력해주세요 : ";
	}
	else {
		cout << "\t검색하실 ";
		setColor(lightYellow, black);
		cout << "작가의 이름";
		setColor(white, black);
		cout << "을 입력해주세요 : ";
	}
	
	cin >> input;
	getMatch(input, type);
	printBasic();

	int cnt = 0;
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		if (matchPoint[i]) {
			printBookInfo(i);
		}
		else {
			cnt++;
		}
	}

	if (cnt == sizeof(presenceOfInfo)) {
		cout << "\t입력한 도서가 존재하지 않습니다.\n";
	}
	else {
		cout << "\t총 ";
		setColor(lightYellow, black);
		cout << sizeof(presenceOfInfo) - cnt;
		setColor(white, black);
		cout << "건의 도서가 검색되었습니다.\n";
	}
}