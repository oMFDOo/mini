//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int col, row;
//		cin >> row >> col;
//		int **matrix = new int*[row];
//
//		for (int i = 0; i < row; i++) {
//			matrix[i] = new int[col];
//		}
//
//		int *min = new int[row]();
//		int *max = new int[row]();
//
//
//		for (int i = 0; i < row; i++) {
//			int minT = 1000;
//			int maxT = 0;
//			for (int j = 0; j < col; j++) {
//				cin >> matrix[i][j];
//				if (minT > matrix[i][j]) {
//					min[i] = matrix[i][j];
//					minT = matrix[i][j];
//				}
//				if (maxT < matrix[i][j]) {
//					max[i] = matrix[i][j];
//					maxT = matrix[i][j];
//				}
//			}
//		}
//
//		sort(min, min + row);
//		sort(max, max + row);
//
//		for (int i = 0; i < row; i++) {
//			cout << min[i] << " ";
//		}
//		for (int i = 0; i < row; i++) {
//			cout << max[i] << " ";
//		}
//
//		cout << endl;
//
//		for (int i = 0; i < row; i++) {
//			delete[] matrix[i];
//		}
//		delete[] matrix;
//	}
//}