//#include <stdio.h>
//#include <string.h>
//#include <random>
//#include <time.h>
//#pragma warning (disable : 4996)
//
///*
//
//=============================
//?숆낵 : 李쎌쓽?뚰봽?몄썾?닿났?숇?
//?숇쾲 : 20193148
//遺꾨컲 : 2遺꾨컲
//?대쫫 : ?⑹쭊二?
//?쒖텧 ?쇱옄 : 19.09.30
//=============================
//
//*/
//
//int countMenu[5];
//
//// 援щ텇??異쒕젰
//void printDividingLine() {
//	printf("\n\n");
//	for (int i = 0; i < 60; i++) {
//		printf("=");
//	}
//	printf("\n\n");
//}
//
//// 硫붾돱 異쒕젰
//void printMenu() {
//	printDividingLine();
//	printf("\t\t<<< ?뺣낫愿 ?앸떦 硫붾돱 >>>\n\n");
//	printf("\t\t    1. ?쇰㈃ (1500) \n");
//	printf("\t\t    2. ?쇰㈃諛?(2000) \n");
//	printf("\t\t    3. ?덇퉴??(3000) \n");
//	printf("\t\t    4. 遺?李뚭컻 (3500) \n");
//	printDividingLine();
//}
//
//// 硫붾돱 ?좏깮 諛?媛寃?由ы꽩
//int selectMenu() {
//	while(true) {
//		char inputMenu[30] = { 0 };
//		printf("\t二쇰Ц??硫붾돱??踰덊샇 ?뱀? ?대쫫???낅젰?댁＜?몄슂 >> ");
//		scanf("%s", inputMenu);
//		printf("\n\n");
//		if (strcmp(inputMenu, "?쇰㈃") == 0 || strcmp(inputMenu, "1") == 0) {
//			return 1500;
//		}
//		else if (strcmp(inputMenu, "?쇰㈃諛?) == 0 || strcmp(inputMenu, "2") == 0) {
//			return 2000;
//		}
//		else if (strcmp(inputMenu, "?덇퉴??) == 0 || strcmp(inputMenu, "3") == 0) {
//			return 3000;
//		}
//		else if (strcmp(inputMenu, "遺?李뚭컻") == 0 || strcmp(inputMenu, "4") == 0) {
//			return 3500;
//		}
//		else {
//			printf("?щ컮瑜??뺤떇??硫붾돱瑜??낅젰?댁＜?몄슂.");
//			printDividingLine();
//		}
//	}
//}
//
//// ?좏깮??硫붾돱??媛?닔 ?낅젰
//int returnPrice(int price) {
//	int numberOfDish = 0;
//	printf("\n\n\t硫붾돱??媛?닔瑜??낅젰?댁＜?몄슂 >> ");
//	scanf("%d", &numberOfDish);
//	if (numberOfDish < 1) {
//		numberOfDish *= -1;
//	}
//	return numberOfDish * price;
//}
//
//// 異붽? 二쇰Ц ?щ? ?뺤씤
//int checkNextOrder() {
//	while (true) {
//		printDividingLine();
//		char check[50] = { 0 };
//		printf("\n\n\t異붽? 二쇰Ц???섏떆寃좎뒿?덇퉴? (Y / N) >> ");
//		scanf("%s", check);
//
//		if (strcmp(check, "Y") == 0 || strcmp(check, "y") == 0) {
//			return 1;
//		}
//		else if (strcmp(check, "N") == 0 || strcmp(check, "n") == 0) {
//			printDividingLine();
//			return 0;
//		}
//		else {
//			printf("\n\n\t?щ컮瑜??뺤떇???듬????낅젰?댁＜?몄슂.");
//		}
//		printDividingLine();
//	}
//}
//
//// 珥?媛寃?異쒕젰
//void printResultPrice(int price) {
//	printf("寃곗젣?섏떎 湲덉븸? %d???낅땲??", price);
//	printDividingLine();
//}
//
//// 湲덉븸 ?ъ엯
//int inputMoney(int price) {
//	
//	int input = 0;
//	while (true) {
//		printf("\t寃곗젣??湲덉븸???ъ엯?댁＜?몄슂. >> ");
//		int temp;
//		scanf("%d", &temp);
//
//		if (temp < 1) {
//			temp *= -1;
//		}
//
//		printf("\n\n");
//		input += temp;
//		if (input < price) {
//			printf("\t\t\t?ъ엯??湲덉븸 : %d\n\n\t\t\t 珥??ъ엯 湲덉븸 : %d\n\n\t\t\t ?⑥? 湲덉븸 : %d\n\n", temp, input, price-input);
//		}
//		else {
//			printf("\t\t\t?ъ엯??湲덉븸 : %d\n\n\t\t\t 珥??ъ엯 湲덉븸 : %d\n\n", temp, input);
//			return input - price;
//		}
//	}
//}
//
//// 嫄곗뒪由꾨룉 怨꾩궛
//void calculateChange(int change) {
//	int temp;
//	int money[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10, 1};
//
//	temp = change;
//	printDividingLine();
//	printf("\t\t?꾨옒??嫄곗뒪由꾨룉??異쒕젰?⑸땲??\n\n");
//
//	for (int i = 0; i < sizeof(money) / sizeof(int); i++) {
//		if (temp / money[i]) {
//			printf("\t>> %d??: %d媛?n", money[i], temp / money[i]);
//			temp %= money[i];
//		}
//	}
//
//	srand(time(NULL));
//	int orderNumber = rand()%100+1;
//
//	printf("\n\n\t\t    二쇰Ц踰덊샇??%d踰덉엯?덈떎.\n", orderNumber);
//	printDividingLine();
//}
//
//
//int main() {
//	countMenu[5] = {0};
//	//  nextOrder : 異붽? 二쇰Ц ?뺤씤??
//	int nextOrder = 1, price = 0, change = 0;
//
//	while (nextOrder) {
//		int inputMenu;
//		printMenu();
//		
//		inputMenu = selectMenu();			// 硫붾돱 ?좏깮		:		硫붾돱??媛寃⑹쓣 由ы꽩
//		price += returnPrice(inputMenu);	// 珥?媛寃?	:		(硫붾돱??媛?닔 X 媛寃? 媛?由ы꽩
//		nextOrder = checkNextOrder();		// 異붽? 二쇰Ц ?щ?	:		李? 嫄곗쭞 
//	}
//	printResultPrice(price);				// 硫붾돱 異쒕젰		:		硫붾돱 ?대쫫 / 洹?媛?닔 / 媛?닔???곕Ⅸ 媛寃?/ 珥앷?寃?異쒕젰
//	change = inputMoney(price);				// 湲덉븸 ?ъ엯		:		嫄곗뒪由꾨룉 由ы꽩
//	calculateChange(change);				// 嫄곗뒪由꾨룉 怨꾩궛	:		嫄곗뒪由꾨룉 媛?닔 怨꾩궛 諛?異쒕젰
//
//}