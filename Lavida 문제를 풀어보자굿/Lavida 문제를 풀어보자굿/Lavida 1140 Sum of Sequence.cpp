//#include <iostream>
//#include <array>
//using namespace std;
//
//int findNum(array <int, 100> arr, int size, int num) {
//	int sum, cnt = 0;
//
//	for (int i = 0; i < size; i++) {
//		sum = 0;
//		for (int j = i; j < size; j++) {
//			sum += arr[j];
//			if (sum % num == 0 && sum != 0) {
//				cnt++;
//			}
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//
//		int arrSize, num, cnt;
//		array <int, 100> arr;
//
//		cin >> arrSize >> num;
//
//		for (int i = 0; i < arrSize; i++) {
//			cin >> arr[i];
//		}
//		cnt = findNum(arr, arrSize, num);
//
//		cout << cnt << endl;
//	}
//}