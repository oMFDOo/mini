//#include <iostream>
//#include <string.h>
//#include <math.h>
//#include <limits.h>
//#define FIRST_CHANNEL 100 
//using namespace std;
//
////1. + -踰꾪듉留??ъ슜?쒕떎.
////- (紐⑺몴 梨꾨꼸 - 100)???덈뙎媛?
////
////2. 洹쇱젒???섎? 留뚮뱾怨?遺媛?곸쑝濡?+ , -踰꾪듉???ъ슜?쒕떎.
//
//
///* ?꾩옱 梨꾨꼸??怨좎옣??踰꾪듉??議댁옱?섎뒗媛 */
//int isBrokenChannel (int _now, int _brokenButton[]) {
//	int trueOrFalse = 1;
//
//	// 0 泥섎━
//	if (_now == 0) {
//		if (_brokenButton[_now % 10] == 1) {
//			trueOrFalse = 0;
//		}
//	}
//	for (; _now > 0 ; _now /= 10) {
//		if (_brokenButton[_now % 10] == 1) {
//			trueOrFalse = 0;
//			break;
//		}
//		if (trueOrFalse == 0) {
//			break;
//		}
//	}
//	return trueOrFalse;
//}
//
///* 梨꾨꼸 臾몄옄 湲몄씠 怨꾩궛 */
//int channelLength(int _now) {
//	int cnt = 0;
//
//	// 0 泥섎━
//	if (_now == 0) {
//		cnt = 1;
//	}
//	else {
//		while (_now) {
//			_now /= 10;
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	// ?낅젰諛쏆? 梨꾨꼸 | 怨좎옣??踰꾪듉 媛?닔 | 怨좎옣 踰꾪듉 醫낅쪟 | 梨꾨꼸 湲몄씠 
//	int channel, countBrokenButton, brokenButton[10] = { 0 }, length;
//	int min = INT_MAX;
//	
//	cin >> channel >> countBrokenButton;
//
//	for (int i = 0; i < countBrokenButton; i++) {
//		int temp;
//		cin >> temp;
//		brokenButton[temp] = 1;
//	}
//
//	/* 1. (+ , -)踰꾪듉留뚯쓣 ?댁슜?댁꽌 援ы븯??梨꾨꼸 ?대룞 */
//	min = abs(channel - FIRST_CHANNEL);
//
//
//	/* 2. 洹쇱젒???섎? 留뚮뱾怨?遺媛?곸쑝濡?+ , -踰꾪듉???ъ슜?쒕떎. */
//	for (int i = 0; i <= 1000000; i++) {
//		
//		// i. (紐⑺몴梨꾨꼸 - ?꾩옱 梨꾨꼸)???덈뙎媛?+ 梨꾨꼸 湲몄씠
//		// ii. 鍮꾧탳
//
//		int temp;
//		if (isBrokenChannel(i, brokenButton)) {
//			length = channelLength(i);
//			temp = abs(channel - i) + length;
//			if (min > temp) {
//				min = temp;
//			}
//		}
//	}
//	cout << min << endl;
//}