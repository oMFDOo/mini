//#include <stdio.h>
//#include <limits.h>
//#pragma warning (disable : 4996)
//
///*
//
//1. 諛곗뿴, 諛곗뿴 ?ъ씠利? 理쒖냼濡??섏뼱???섎뒗 媛?
//
//	int 理쒖냼湲몄씠 = INT_MAX, ?? 寃곌낵 = 0
//
//	諛섎났臾?(for a ~ size)
//		??= 0
//		諛섎났臾?for b = a ~ size)
//			??+= 諛곗뿴[b]
//		if ( 理쒖넖媛믩낫???ш퀬 / 理쒖냼 湲몄씠蹂대떎 吏㏃쓣 ??)
//			理쒖냼湲몄씠 = b媛?- a媛?
//			寃곌낵 = 理쒖냼湲몄씠
//	return 寃곌낵
//
//	/////////////////////?⑥닔/////////////////////////
//
//int find_min_length (int box[], int len, int min) {
//	int min_length = INT_MAX, result = 0;
//
//	for (int i = 0; i < len; i++) {
//		int sum = 0;
//		for (int j = i; j < len; j++) {
//			sum += box[j];
//
//			if (min <= sum && min_length >= j - i + 1) {
//				printf("sum : %d j : %d i : %d\n", sum, j, i);
//				min_length = j - i + 1;
//				result = j - i + 1;
//			}
//		}
//	}
//	return result;
//}
//
//*/
//
//
///*
//
//	int 理쒖냼湲몄씠 = INT_MAX, ??
//
//	諛섎났臾?(for a ~ size)
//		??= 0
//		諛섎났臾?for b = a ~ size)
//			??+= 諛곗뿴[b]
//			if ( 理쒖넖媛믩낫???ш퀬 / 理쒖냼 湲몄씠蹂대떎 吏㏃쓣 ??)
//				理쒖냼湲몄씠 = b媛?- a媛?
//			if (理쒖냼湲몄씠 >= b - a)
//				??μ갹
//	return 理쒖냼湲몄씠 == INT MAX ? 0 : 理쒖냼湲몄씠
//
//	- 理쒖냼湲몄씠瑜?怨꾩냽 ?낅뜲?댄듃 ?댁＜??
//	- 理쒖냼湲몄씠蹂대떎 湲몄뼱吏寃??먯깋?섎㈃ ?щЦ???딆뼱踰꾨━??
//
//*/
//
///*
//
//	- 0遺???ъ씠利덇퉴吏 ?덈떎.
//		- ?낅젰諛쏅뒗 源??泥섏쓬遺???뷀븳 媛믪쓣 李④렐李④렐 諛곗뿴???ｋ뒗??
//
//	- 議곌굔??異⑹”?섎뒗 諛곗뿴 ?몃뜳?ㅻ? 李얜뒗??
//		- 李얠븯??
//			- 0踰??몃뜳?ㅻ???媛믪쓣 鍮쇱뼱蹂몃떎.
//			- 議곌굔??留뚯”?섎뒗 湲몄씠瑜?援ы븳?? (?몃뜳?ㅼ쓽 李?
//			- 理쒖냼 湲몄씠瑜???ν븳??洹??댄봽臾몄쑝濡??뚮━怨좊룎由ш퀬 ?섎뒗 嫄?.
//
//*/
//
//int find_min_length(long long box[], int len, int min) {
//
//	int min_length = INT_MAX;
//	int left = 0, right = 0;
//
//	for (; right < len; right++) {
//		// 理쒖넖媛?議곌굔 異⑹”
//		if (box[right] >= min) {
//			for (; left <= right; left++) {
//				/*
//					議곌굔 
//				1. ?ㅻⅨ履?- ?쇱そ??理쒖냼蹂대떎 而ㅼ빞?쒕떎.
//				2. 湲몄씠(right - left + 1)??理쒖냼湲몄씠蹂대떎 吏㏃븘?쇳븳??
//
//
//					寃곌낵
//				-> 理쒖냼 湲몄씠媛 ?낅뜲?댄듃(right - left + 1)?쒕떎.
//				-
//				*/
//				if (min_length > right - left + 1) {
//					min_length = right - left + 1;
//				}
//				if ( box[right] - box[left] < min  ) {
//					break;
//				}
//			}
//		}
//	}
//	return min_length == INT_MAX ? 0 : min_length;
//}
//
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		long long num[100000];
//		int size, min_sum, min_length;
//
//		scanf("%d %d %lld", &size, &min_sum, &num[0]);
//		
//		for (int i = 1; i < size; i++) {
//			scanf("%lld", &num[i]);
//			num[i] += num[i-1];
//		}
//
//		min_length = find_min_length(num, size, min_sum);
//
//		printf("%d\n", min_length);
//	}
//}