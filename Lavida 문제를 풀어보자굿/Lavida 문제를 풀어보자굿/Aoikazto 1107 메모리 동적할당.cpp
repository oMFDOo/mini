//#include <algorithm>
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define endl "\n"
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//
//		int row, col;
//		cin >> row >> col;
//		
//		int** arr = new int*[row];
//
//		for (int i = 0; i < row; ++i) {
//			arr[i] = new int[col];
//		}
//		
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < col; j++) {
//				cout << i + j << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//
//		for (int i = 0; i < row; ++i) { 
//			delete[] arr[i]; 
//		}
//		delete[] arr;
//	}
//}