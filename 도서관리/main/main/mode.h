
#include "bookData.h"
#include "sortData.h"

int selectMode();

// 모드 선정
int selectMode() {

	while (true) {
		string inputMode;
		setColor(lightPurple, black);
		cin >> inputMode;
		setColor(white, black);

		// 허용 범위 : 0 < temp < 버튼의 갯수
		// 예외 : 없음
		int mode = exceptionHandling(inputMode, 0, 4, INT_MIN);
		if (mode) {
			return mode;
		}
	}
}

// 정렬법 선택
void selectsort() {

	while (true) {
		string inputMode;

		cout << "\n\n0. 메인으로  1. 가나다 순 정렬  2.페이지 많은 순으로  3.페이지 적은 순으로  4.가격 높은 순으로  5.가격 낮은 순으로\n\n";

		setColor(lightPurple, black);
		cin >> inputMode;
		setColor(white, black);

		// 허용 범위 : 0 < temp < 버튼의 갯수
		// 예외 : 없음
		int mode = exceptionHandling(inputMode, -1, 5, INT_MIN);

		if (mode == 0) {	// 종료
			return;
		}
		else if ( mode == 1) {	// 가나다 순
			sortString(checkOverflow());
			system("cls");
			printBasic();
			printAllList();
		}
		else if (mode == 2) {	// 페이지 높은 순
			sortPageDown(checkOverflow());
			system("cls");
			printBasic();
			printAllList();
		}
		else if (mode == 3) {	// 페이지 낮은 순
			sortPageUp(checkOverflow());
			system("cls");
			printBasic();
			printAllList();
		}
		else if (mode == 4) {	// 가격 높은 순
			sortPriceDown(checkOverflow());
			system("cls");
			printBasic();
			printAllList();
		}
		else if (mode == 5) {	// 가격 높은 순
			sortPriceUp(checkOverflow());
			system("cls");
			printBasic();
			printAllList();
		}
	}
}
