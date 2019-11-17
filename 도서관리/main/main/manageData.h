#include "bookDatas.h"
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
		cout << "\t책 제목을 입력해주세요. : ";
		cin.ignore(50, '\n');
		getline(cin, LB[index].name);
		cout << "\n\t책의 저자를 입력해주세요. : ";
		getline(cin, LB[index].author);

		string temp;
		cout << "\n\n\t책의 출간일을 입력해주세요. 모르는 경우 '1'을 입력해주세요.\n\t(YYYYMMDD ex - 20190402) : ";
		while (true) {
			cin >> temp;
			int output = exceptionHandling(temp, 9999999, 20191120, 1);
			if (output) {
				LB[index].publicationDate = output;
				break;
			}
		}

		cout << "\n\n\t책의 가격(1000원 이상)을 입력해주세요. 모르는 경우 '1'을 입력해주세요.";
		while (true) {
			cin >> temp;
			int output = exceptionHandling(temp, 999, INT_MAX, 1);
			if (output) {
				LB[index].price = output;
				break;
			}
		}

		cout << "\n\n\t책의 페이지 수를 입력해주세요. 모르는 경우 '1'을 입력해주세요.";
		while (true) {
			cin >> temp;
			int output = exceptionHandling(temp, 0, INT_MAX, 1);
			if (output) {
				LB[index].page = output;
				break;
			}
		}

		setColor(green, black);
		cout << "\n\n\n\t입력하신 정보가 저장되었습니다.";
		Sleep(800);
	}
	else {
		setColor(red,black);
		cout << "\n\t입력 가능 공간이 부족합니다.\n\n";
		cout << "\t기존 책을 삭제 후 진행해주세요\n";
		setColor(white, black);
	}
	
}

// 예외 처리
int exceptionHandling(string input, int range1, int range2, int exception) {
	int mode = atoi(input.c_str());
	if ((range1 < mode && mode <= range2) || (mode == exception)) {
		return mode;
	}
	else {
		cout << "\n\t\t\t\t올바른 값을 입력해주세요.\n";
		cout << "\t\t\t\t\t재 입력 : ";
		return 0;
	}
}

// 삭제
void deleteBook() {
	system("cls");
	string input;
	printDividingLine(80);
	cout << "목록에 있는 책 중 삭제할 책의 번호를 입력해주세요.";
	printDividingLine(80);
	printAllList();

	setColor(skyblue,black);
	cout << "삭제할 책의 번호 : ";
	int index;
	while(true) {
		cin >> input;
		setColor(white, black);
		index = exceptionHandling(input, 0, sizeof(presenceOfInfo), INT_MIN);
		if (index) {
			if (presenceOfInfo[index-1]) {
				break;
			}
			cout << "\n\t\t\t\t올바른 값을 입력해주세요.\n";
			cout << "\t\t\t\t\t재 입력 : ";
		}
	}
	
	cout << "\n도서 ";
	setColor(lightPurple, black);
	cout << LB[index - 1].name;
	setColor(white, black);
	cout << "(이)가 삭제되었습니다.\n";
	(LB[index-1].name).clear(); 
	presenceOfInfo[index - 1] = false;

}

// 오버플로우 체크
int checkOverflow() {
	int cnt = 0;
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		
		if ((LB[i].name).length() != 0) {
			presenceOfInfo[i] = true;
		}
		else {
			presenceOfInfo[i] = false;
		}

		if (presenceOfInfo[i]) {
			cnt++;
		}
	}
	if (cnt == sizeof(presenceOfInfo)) {
		return sizeof(presenceOfInfo);
	}
	return cnt;
}

// Null판단
int findNull() {
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		if (!presenceOfInfo[i]) {
			return i+1;
		}
	}
	return sizeof(presenceOfInfo);
}