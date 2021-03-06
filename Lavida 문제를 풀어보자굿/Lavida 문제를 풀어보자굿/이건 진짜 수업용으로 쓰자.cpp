#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int TC, cnt = 0;
	string input, output, result[100001];

	cin >> TC;

	while (TC--) {

		cin >> input;
		

		int len = input.length();

		for (int i = 0; i < len; i++) {
			char temp = input[i];
			if (isalnum(temp)) {
				if (cnt == 3) {
					output += '-';
				}
				if (temp == 'A' || temp == 'B' || temp == 'C') {
					output += '2';
				}
				else if (temp == 'D' || temp == 'E' || temp == 'F') {
					output += '3';
				}
				else if (temp == 'G' || temp == 'H' || temp == 'I') {
					output += '4';
				}
				else if (temp == 'J' || temp == 'K' || temp == 'L') {
					output += '5';
				}
				else if (temp == 'M' || temp == 'N' || temp == 'O') {
					output += '6';
				}
				else if (temp == 'P' || temp == 'R' || temp == 'S') {
					output += '7';
				}
				else if (temp == 'T' || temp == 'U' || temp == 'V') {
					output += '8';
				}
				else if (temp == 'W' || temp == 'X' || temp == 'Y') {
					output += '9';
				}
				else if ('0' <= temp || temp <= '9') {
					output += temp;
				}
			}
		}
		result[cnt++] = output;
	}

	sort(result, result + cnt);

	input = result[0];
	int re = 1;
	bool print = true;
	for (int i = 1; i < cnt; i++) {
		if (input.compare(result[i]) == 0) {
			re++;
		}
		else {
			if (re > 1) {
				cout << input << " " << re << endl;
				print = false;
			}
			input = result[i];
			re = 1;
		}
	}

	if (print) {
		cout << "No duplicates.\n";
	}
}