//#include <algorithm>
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int binary[27];
//
//void base64Encoding(int index) {
//	int j = 0;
//	for (int i = 0; i < 4; i++) {
//		int sum = 0;
//
//		for (j; j < j+6; j++) {
//			sum += binary[index] * (0 << j%6);
//			int t = 1 << j;
//			cout << t << endl;
//		}
//		char a = sum;
//		cout << a << endl;
//		j += 6;
//	}
//}
//
//void binaryNumberConversion(char text[], int index) {
//	int temp = index % 3;
//	if (temp == 1) {
//		temp = 8;
//	}
//	else if (temp == 2) {
//		temp = 16;
//	}
//	else if (temp == 0) {
//		temp = 0;
//	}
//
//	for (int i = index; i < index+3; i ++) {
//		int num = text[i];
//		for (int j = temp+7; j >= temp; j--) {
//			binary[j] = num % 2;
//			num /= 2;
//		}
//		temp += 8;
//	}
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char originalText[1027];
//
//		cin >> originalText;
//		int len = strlen(originalText);
//		for (int i = 0; i < len; i+=3) {
//			binaryNumberConversion(originalText, i);
//			base64Encoding(i);
//			cout << endl;
//		}
//	}
//}