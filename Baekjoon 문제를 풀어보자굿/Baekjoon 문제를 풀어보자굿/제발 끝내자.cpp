//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#include <string>
//using namespace std;
//
//
//struct minusPoint {
//	char word[50];
//	int point;
//};
//
//int main() {
//	minusPoint M[15];
//	char english[30];
//
//
//	int TC, testCentenceNumber;
//
//	cin >> TC >> testCentenceNumber;
//	for (int i = 0; i < TC; i++) {
//		cin >> M[i].word >> M[i].point;
//		int temp = strlen(M[i].word);
//	}
//	while (testCentenceNumber--) {
//		int sum = 0, cnt = 0;
//		while (true) {
//
//			cin >> english;
//
//			if (strcmp(english, ".") == 0) {
//				break;
//			}
//
//			int len = strlen(english);
//
//			sum += len;
//
//			for (int i = 0; i < TC; i++) {
//				if (strcmp(M[i].word, english) == 0) {
//					sum -= M[i].point;
//					sum -= len;
//					break;
//				}
//			}
//			if (cnt > 0) {
//				for (int i = 0; i < len; i++) {
//					if (english[i] > 64 && english[i] < 91) {
//						sum -= len + 2;
//						break;
//					}
//				}
//			}
//			else {
//				for (int i = 1; i < len; i++) {
//					if (english[0] > 96 && english[0] < 123) {
//						sum -= len + 2;
//						break;
//					}
//					if (english[i] > 64 && english[i] < 91) {
//						sum -= len + 2;
//						break;
//					}
//				}
//			}
//			cnt++;
//		}
//		if (sum < 0) {
//			cout << "Fail\n";
//		}
//		else {
//			cout << sum << endl;
//		}
//	}
//}