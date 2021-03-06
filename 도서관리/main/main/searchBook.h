#include "bookData.h"
#include "findString.h"
#include "manageData.h"

#pragma once
using namespace std;

int search() {
	return 0;
}

void searchInfo() {
	
	// 검색 타입 출력
	printSerchType();

	string input;
	
	int type = 1;

	while(true) {

		cin >> input;

		// 허용 범위 : 0 < input <= 버튼 수
		// 예외 : 인트최솟값
		type = exceptionHandling(input, 0, 2, INT_MIN);
		if (type) {
			break;
		}
	}
	
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
	
	cin >> input;			// 검색어 입력
	getMatch(input, type);	// 입력 도서 검색
	printBasic();

	int cnt = 0;
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		// 검색어가 일치된 값은 출력
		if (matchPoint[i]) {
			printBookInfo(i);
		}
		else {
			cnt++;
		}
	}

	
	if (cnt == sizeof(presenceOfInfo)) {	// 검색 되지 않은 값이 도서 수와 같은 경우 (책이 없음)
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