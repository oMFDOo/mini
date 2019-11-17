///*
//1. 정해 : valueCase Sort, testCase Sort, 후 Counting 하여 True False 체크
//2. 정해 : valueCase Sort, 이후 testCase 입력 후 binary_search
//3. 비정해 : valueCase, testCase 
//
//*/
//
//#include <fstream>
//#include <iostream>
//#include <algorithm>
//#include <array>
//#include <random>
//
//using namespace std;
//
//#define tin cin
//#define tout cout
//
//array<int, 200 * 10000> value;
//
//void MakeTestCase() {
//	ios::sync_with_stdio(false);
//	tin.tie(0);
//	int testCase = 1500000;
//	int valueCase = 10000;
//
//	int size = 2000000000;
//
//	tout << testCase << " " << valueCase << endl;
//	
//	for (int i = 0; i < testCase; i++) {
//		value[i] = random_device{}() % size;
//		tout << value[i] << " ";
//	}
//
//	tout << endl;
//
//	for (int i = 0; i < valueCase; i++) {
//		int r = random_device{}() % 100;
//		unsigned int p = 0;
//		if (r < 15) {
//			p = value[random_device{}() % testCase];
//		}
//		else {
//			p = random_device{}() % size;
//		}
//		tout << p << " ";
//	}
//}
//
//void TOSolve() {
//	int valueCase, testCase;
//	tin >> valueCase >> testCase;
//
//	for (int i = 0; i < valueCase; i++) {
//		tin >> value[i];
//	}
//
//	int num;
//	int True = 0;
//	int False = 0;
//
//	for (int i = 0; i < testCase; i++) {
//		tin >> num;
//		int e;
//		for (e = 0; e < valueCase; e++) {
//			if (value[e] == num) {
//				True++;
//				break;
//			}
//		}
//		if (e == valueCase) {
//			False++;
//		}
//	}
//
//	tout << "True : " << True << " False : " << False;
//}
//
//void Solve() {
//	int valueCase, testCase;
//	tin >> valueCase >> testCase;
//
//	for (int i = 0; i < valueCase; i++) {
//		tin >> value[i];
//	}
//
//	sort(value.begin(), value.begin() + valueCase);
//
//	int num;
//	int True = 0;
//	int False = 0;
//
//	for (int i = 0; i < testCase; i++) {
//		tin >> num;
//		if (binary_search(value.begin(), value.begin() + valueCase, num)) {
//			True++;
//		}
//		else {
//			False++;
//		}
//	}
//
//	tout << "True : " << True << " False : " << False;
//
//}
//
//int main() {
//	Solve();
//	//MakeTestCase();
//	//cout << "Make" << endl;
//}