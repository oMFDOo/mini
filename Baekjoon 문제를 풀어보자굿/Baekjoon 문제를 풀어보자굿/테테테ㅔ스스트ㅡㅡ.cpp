//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <math.h>
//using namespace std;
//
//int result[200000] = { 0 };
//int num[200000] = { 0 };
//char re[2000000][8];
//int main() {
//	int TC;
//	cin >> TC;
//	string str;
//	
//	int size = 0;
//	while (TC--) {
//
//		int cnt = 1;
//		cin >> str;
//
//		// 문자 저장
//		int len = str.length();
//		for (int i = 0; i < len; i++) {
//			int gub = (1000000) / pow(10, cnt) * 10;
//			if (isalnum(str[i])) {
//				if (isalpha(str[i])) {
//					if (str[i] <= 'C') {
//						num[size] += 2 * gub;
//					}
//					else if (str[i] <= 'F') {
//						num[size] += 3 * gub;
//					}
//					else if (str[i] <= 'I') {
//						num[size] += 4 * gub;
//					}
//					else if (str[i] <= 'L') {
//						num[size] += 5 * gub;
//					}
//					else if (str[i] <= 'O') {
//						num[size] += 6 * gub;
//					}
//					else if (str[i] <= 'S') {
//						num[size] += 7 * gub;
//					}
//					else if (str[i] <= 'V') {
//						num[size] += 8 * gub;
//					}
//					else if (str[i] <= 'Y') {
//						num[size] += 9 * gub;
//					}
//				}
//				else {
//					num[size] += (str[i] - '0') * gub;
//				}
//				cnt++;
//			}
//		}
//		size++;
//	}
//
//	// 정렬
//	sort(num, num + size);
//
//	// 중복 처리
//	int temp = num[0], same = 0, scnt = 0;
//	for (int i = 0; i < size; i++) {
//		if (temp == num[i]) {
//			same++;
//		}
//		if (temp != num[i] || i == size-1) {
//			result[scnt] = temp;
//			result[scnt + 1] = same;
//			temp = num[i];
//			same = 1;
//			scnt += 2;
//		}
//	}
//	
//	// 숫자 문자로 바꾸기
//	for (int i = 0; i < scnt; i++) {
//		int ct = 0;
//		for (int k = 0; k < 7; k++) {
//			char temp = result[i] / (1000000 / pow(10,ct)) + '0';
//			re[i][k] = temp;
//			result[i] = result[i] % (int)(1000000 / pow(10, ct));
//			ct++;
//		}
//	}
//
//	// 출력
//	bool ha = true;
//	for (int i = 0; i < scnt; i += 2) {
//		if (re[i+1][6] > '1') {
//			for (int j = 0; j < 8; j++) {
//				if (j < 3) {
//					ha = false;
//					cout << re[i][j];
//				}
//				else if (j < 4) {
//					cout << '-';
//				}
//				else {
//					cout << re[i][j-1];
//				}
//			}
//			cout << " " << re[i + 1][6];
//			cout << endl;
//		}
//	}
//
//	// 짝이 없을 때
//	if (ha) {
//		cout << "No duplicates.\n";
//	}
//}