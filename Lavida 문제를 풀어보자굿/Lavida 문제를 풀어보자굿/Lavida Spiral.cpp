//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	while (1) {
//		int num;
//		scanf("%d", &num);
//		int SIZE = ceil(sqrt(num));
//		if (SIZE % 2 == 0) {
//			SIZE++;
//		}
//		int size = SIZE * SIZE - num;
//		int R_Size = SIZE * SIZE;
//
//		//printf("%d %d %d\n", size, SIZE, R_Size);
//
//		int x, y;
//		//printf("%d %d %d %d %d %d\n", num, R_Size, 1 * SIZE, 2 * SIZE + 1, 3 * SIZE + 2, 4 * SIZE);
//		if (num == 1) {
//			x = 0;
//			y = 0;
//		}
//		else if (num > R_Size - 1 * SIZE) {
//			x = (num - SIZE * SIZE) + SIZE/2;
//			y = (int)SIZE / 2 * -1;
//			//printf("case 1\n");
//		}
//		else if (num > R_Size - 2 * SIZE + 1) {
//			x = (int)SIZE / 2 * -1;
//			y = (((num + SIZE) - SIZE * SIZE) + SIZE / 2) * -1;
//			//printf("case 2\n");
//		}
//		else if (num > R_Size - 3 * SIZE + 2) {
//			x = ((num - SIZE * SIZE) + SIZE * 2) * -1;
//			y = (int)SIZE / 2;
//			//printf("case 3\n");
//		}
//		else if (num > R_Size - 4 * SIZE) {
//			x = (int)SIZE / 2;
//			y = (((num + SIZE) - SIZE * SIZE) + SIZE * 2) * -1;
//			//printf("case 4\n");
//		}
//		printf("(%d,%d)\n", y, x);
//	}
//	/*
//	(SIZE 제곱) - 입력값이
//
//	(4 * SIZE) - 1*SIZE 까지
//		- X : (입력값 - SIZE제곱) + SIZE
//		- Y : (INT) SIZE / 2
//
//	(4 * SIZE) - 2*SIZE 까지
//		- X : - (INT) SIZE / 2
//		- Y : (입력값 - SIZE제곱 + 1) + SIZE
//
//	(4 * SIZE) - 3*SIZE 까지
//		- X : (입력값 - SIZE제곱) + SIZE
//		- Y : - (INT) SIZE / 2
//
//	(4 * SIZE) - 4*SIZE 까지
//		- X : (INT) SIZE / 2
//		- Y : (입력값 - SIZE제곱 + 1) + SIZE
//	*/
//
//}