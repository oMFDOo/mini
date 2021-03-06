///*
//문제 상황
//
//입력
//1. 테스트 케이스 1 ~ 100
//2. 원소의 개수 입력 3 ~ 500
//3. 원소 입력 -1000 ~ 1000
//
//출력
//1. 시작점
//2. 종료점
//3. 부분수열의 합
//*/
//
///*
//< 나의 뇌피셜 >
//1. 지금 내가 콕 찍은 곳이(for a ~ size)
//	- 음수 : 넘어가욧
//	- 양수(+ 0) (for b = a+1 ~ size)
//		- a+1을 봐 그런데 얘가!
//			- 더하면 0이하가된다
//			  : break 하고 넘어가욧
//			- 더하면 0이상 이거나 현재값 이상!
//			  : (for c = a+1 ~ b)
//				- 합을 구함
//				- 최댓값 구하는 if문
//				   : 이 때 시작 끝 인덱스도 저장
//*/
//
//
/////* 이 코드에는 슬픈 전설이 있어 바로 오류가 난다는 거지*/
////int main() {
////	int TC;
////	scanf("%d", &TC);
////	while(TC--) {
////		int size, num, box[500];
////
////		scanf("%d", &size);
////
////		for (int i = 0; i < size; i++) {
////			scanf("%d", &box[i]);
////		}
////
////		int sum = 0, max = INT_MIN, start = 0, end = 0;
////		for (int a = 0; a < size; a++) {
////			// 콕 찍은 곳이 양수면
////			if (box[a] > 0) {
////				// a+1을 봐! 그런데 얘가
////				for (int b = a + 1; b < size; b++) {
////					// -더하면 0이상이다
////					sum = 0;
////					if (box[a] + box[b] >= 0 || box[a] + box[b] >= sum) {
////						// 범위 오류 났당 >< 신난담
////						for (int c = a; c < b; c++) {
////							sum += box[c];
////						}
////						if (sum > max) {
////							max = sum;
////							start = a;
////							end = b;
////						}
////					}
////					else {
////						break;
////					}
////				}
////			}
////		}
////		printf("start : %d end : %d sum : %d\n", start, end, sum);
////	}
////}
//
//
//#include <iostream>
//#include <stdio.h>
//#include <limits.h>
//#pragma warning (disable : 4996)
//using namespace std;
//
///*		완전 탐색 (brute_force)		*/
//static int brute_force(int s[], int _size, int _min) {
//
//	int sum = 0;
//	int max_sum = s[0];
//	int start, end;
//	for (int i = 0; i < _size; i++) {
//		sum = 0;
//		for (int j = i; j < _size; j++) {
//			sum += s[j];
//			if (max_sum <= sum) {
//				max_sum = sum;
//				start = i + 1;
//				end = j + 1;
//			}
//		}
//	}
//	printf("%d %d ", start, end);
//	return max_sum;
//}
//
//int main() {
//	int max, TC, num[100000], size, min_sum = 0;
//	
//	scanf("%d", &TC);
//	while (TC--) {
//		scanf("%d", &size);
//
//		for (int i = 0; i < size; i++) {
//			scanf("%d", &num[i]);
//		}
//
//		max = brute_force(num, size, min_sum); //- 완탐~
//		printf("%d\n", max);
//	}
//}