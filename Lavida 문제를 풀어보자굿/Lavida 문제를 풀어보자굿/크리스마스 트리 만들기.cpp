#include <iostream>
#include <Windows.h>

#pragma warning (disable : 4996)
using namespace std;

#define SIZE 12

enum color {
	black, blue, green, skyblue, red,
	purple, yellow, white, grey, lightBlue,
	lightGreen, lightSkyblue, lightRed,
	lightPurple, lightYellow, darkWhite
};

void setColor(int color, int bgcolor) {

	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);

}

int main() {
	for (int y = 0; y < SIZE; y++) {
		int cnt =  0;
		setColor(white, black);


		if (y == 0) {
			for (int x2 = 0; x2 < (SIZE * 2 - 3) / 2; x2++) {
				cout << "  ";
			}
			setColor(lightYellow, black);
			cout << "*\n\n";
			y++;
			continue;


		}
		
		for (int x2 = 1; x2 < (SIZE - y); x2++) {
			cout << "  ";
			cnt++;
		}
		for (int x1 = 1; x1 < y * 2; x1++) {

			if (cnt % 2) {
				setColor(green, black);
			}
			else {
				setColor(red, black);
			}
			cout << "* ";
			cnt++;
		}
		cout << "\n\n";
	}
	for (int i = 0; i < SIZE / 3; i++) {
		setColor(white, black);
		for (int j = 0; j < (SIZE * 2 - 1) / 2 + SIZE % 2 - SIZE / 4 - 2; j++) {
			cout << "  ";
		}
		for (int j = 0; j < SIZE / 4 + 1; j++) {
			setColor(yellow, black);
			cout << "[ ] ";
		}
		cout << "\n\n";
	}
	for (int i = 0; i < 3; i++) {

		for (int i = 0; i < SIZE * 2 - 1; i++) {
			setColor(white, white);
			cout << "  ";
		}
		cout << "\n";
	}
	setColor(black, black);
	cout << endl;
}