
#include "bookDatas.h"


int selectMode();
int selectSearch();

// mode select
int selectMode() {

	while (true) {
		string inputMode;		// 모드 선정
		cin >> inputMode;

		int mode = exceptionHandling(inputMode, 0, 4, -1);
		if (mode) {
			return mode;
		}
	}
}

// 1. 제목 2. 작가
int selectSearch() {
	while (true) {
		string inputMode;		// 모드 선정
		cin >> inputMode;

		int mode = exceptionHandling(inputMode, 0, 2, -1);
		if (mode) {
			return mode;
		}
	}
}