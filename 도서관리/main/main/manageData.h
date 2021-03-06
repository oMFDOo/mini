#include "bookData.h"
#include "printInformation.h"

void addBook();
void deleteBook();
int checkOverflow();
int findNull();
int exceptionHandling(string, int, int, int);

// 도서 추가
void addBook() {
	if (checkOverflow() != sizeof(presenceOfInfo)) {
		int index = findNull()-1;
		presenceOfInfo[index] = true;

		// 페이지수, 가격, 출간일, 책이름, 작가
		cout << "\n\n\t책 ";				// 입력 내용 출력 : 제목
		setColor(lightGreen, black);
		cout << "제목";
		setColor(white, black);
		cout << "을 입력해주세요. : ";

		cin.ignore(50, '\n');			// 입력 : 제목
		setColor(lightSkyblue, black);
		getline(cin, LB[index].name);
		setColor(white, black);


		cout << "\n\t책의 ";				// 입력 내용 출력 : 저자
		setColor(lightGreen, black);
		cout << "저자";
		setColor(white, black);
		cout << "를 입력해주세요. : ";


		setColor(lightSkyblue, black);	// 입력 : 저자
		getline(cin, LB[index].author);
		setColor(white, black);

		string temp;					// 입력 내용 출력 : 출간일
		cout << "\n\n\t책의 ";
		setColor(lightGreen, black);
		cout << "출간일"; 
		setColor(white, black);
		cout << "을 입력해주세요.모르는 경우 '1'을 입력해주세요.\n\t(YYYYMMDD ex - 20190402) : ";


		while (true) {					// 입력 : 저자 , 예외처리
			setColor(lightSkyblue, black);
			cin >> temp;
			setColor(white, black);

			// 허용 범위 : 표기 기준 (YYYYMMDD)가 가능한 정수 < temp < 2060년 이전 기간
			// 예외 : 날짜를 모르는 경우
			int output = exceptionHandling(temp, 9999999, 20600000, 1);
			if (output) {
				LB[index].publicationDate = output;
				break;
			}
		}

		cout << "\n\n\t책의 ";			// 입력 내용 출력 : 가격
		setColor(lightGreen, black);
		cout << "가격(1000원 이상)";
		setColor(white, black);
		cout << "을 입력해주세요. 모르는 경우 '1'을 입력해주세요. : ";

		while (true) {					// 입력 : 가격 , 예외처리
			setColor(lightSkyblue, black);
			cin >> temp;
			setColor(white, black);

			// 허용 범위 : 0 < temp < int최댓값
			// 예외 : 가격을 모르는 경우
			int output = exceptionHandling(temp, 999, INT_MAX, 1);
			if (output) {
				LB[index].price = output;
				break;
			}
		}

		cout << "\n\n\t책의 ";			// 입력 내용 출력 : 페이지 수
		setColor(lightGreen, black);
		cout << "페이지 수";
		setColor(white, black);
		cout << "를 입력해주세요. 모르는 경우 '1'을 입력해주세요. : ";


		while (true) {					// 입력 : 페이지 수 , 예외처리
			setColor(lightSkyblue, black);
			cin >> temp;
			setColor(white, black);
			// 허용 범위 : 0 < temp < int최댓값
			// 예외 : 페이지 수를 모르는 경우
			int output = exceptionHandling(temp, 0, INT_MAX, 1);
			if (output) {
				LB[index].page = output;
				break;
			}
		}

		setColor(green, black);
		cout << "\n\n\n\t입력하신 정보가 저장되었습니다.";
		setColor(white, black);
	}
	else {
		setColor(red,black);
		cout << "\n\t입력 가능 공간이 부족합니다.\n\n";
		cout << "\t기존 책을 삭제 후 진행해주세요\n";
		setColor(white, black);
	}
	
}


/*
	목적 : 입력값 예외처리 및 인트형 변환
	매개변수 : 입력값, 허용 최솟값, 허용 최댓값, 예외 인정 값
	반환 : 
		올바른 값 입력시 - 입력한 값을 인트로 변환한 값
		올바르지 않은 값 - flase
*/
int exceptionHandling(string input, int range1, int range2, int exception) {
	int mode = atoi(input.c_str());
	if ((range1 < mode && mode <= range2) || (mode == exception)) {
		return mode;
	}
	else {
		cout << "\n\t\t\t\t올바른 값을 입력해주세요.\n";
		cout << "\t\t\t\t\t재 입력 : ";
		return false;
	}
}

// 삭제
void deleteBook() {
	system("cls");
	string input;
	printDividingLine(80);
	cout << "목록에 있는 책 중 삭제할 책의 번호를 입력해주세요. : ";
	printDividingLine(80);
	printAllList();							// 모든 책 목록 출력

	setColor(skyblue,black);
	cout << "삭제할 책의 번호 : ";
	int index;
	while(true) {							// 입력 : 삭제할 책의 번호 , 예외처리
		cin >> input;
		setColor(white, black);

		// 허용 범위 : 0 < index < 책 리스트 목록 수
		// 예외 : 인트최댓값
		index = exceptionHandling(input, 0, sizeof(presenceOfInfo), INT_MIN);	// 예외 처리
		if (index) {
			if (presenceOfInfo[index-1]) {
				break;
			}
			cout << "\n\t\t\t\t올바른 값을 입력해주세요.\n";
			cout << "\t\t\t\t\t재 입력 : ";
		}
	}
	
	cout << "\n도서 ";					// 삭제 완료 알림
	setColor(lightPurple, black);
	cout << LB[index - 1].name;
	setColor(white, black);
	cout << "(이)가 삭제되었습니다.\n";

	(LB[index-1].name).clear();			// 내용 삭제
	presenceOfInfo[index - 1] = false;	// 삭제 표기

}

// 오버플로우 체크
int checkOverflow() {
	int cnt = 0;
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		
		if ((LB[i].name).length() != 0) {	// 내용이 비어있지 않으면
			presenceOfInfo[i] = true;		// 내용이 있음을 표기
		}
		else {								// 그렇지 않다면 (내용이 없다면)
			presenceOfInfo[i] = false;		// 내용이 없음을 표기
		}

		if (presenceOfInfo[i]) {			// 내용이 있다면 카운트 증가
			cnt++;							// 보유 책 체크용
		}
	}
	if (cnt == sizeof(presenceOfInfo)) {	// 내용을 모두 채움
		return cnt;
	}
	return cnt;
}


/*
	목적 : 책을 입력할 공간 찾기
	매개변수 : 
	반환 : 입력 가능한 공간의 인덱스
*/
int findNull() {
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		if (!presenceOfInfo[i]) {
			return i+1;
		}
	}
	return sizeof(presenceOfInfo);
}