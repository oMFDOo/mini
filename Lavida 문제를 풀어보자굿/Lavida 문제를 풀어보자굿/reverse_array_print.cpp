//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int size, num[5000];
//
//void reverse(int HiHi) {		// HiHi 초깃값 :  1	size : 20
//	if (HiHi > size) {
//		printf("하하! 끝났다!\n");
//		return ;
//	}
//	else {
//		reverse(HiHi+1);
//		printf("%d %d\n", num[HiHi], HiHi);
//		return ;
//	}
//}
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		scanf("%d", &size);
//		for (int i = 1; i <= size; i++) {
//			num[i] = i;
//		}
//		reverse(1);
//	}
//}