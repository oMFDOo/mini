//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//
//#pragma warning (disable : 4996)
//using namespace std;
//
//int main() {
//	for (int y = 1; y <= 15; y++) {
//		for (int x2 = 0; x2 < (y - x2) / 2; x2++) {
//
//		}
//		for (int x1 = 0; x1 < y * 2 - 1; x1++) {
//
//		}
//	}
//}

//typedef struct _A {
//	int a;
//	float b;
//	char c[4];
//}A;
//
//int main() {
//
//	char string[50] = {"love is the open door"};
//	
//	int len = strlen(string);
//	
//	printf("%s\n\n", string);
//	for (int i = 0; i < len; i++) {
//		printf("%c", *(&string[len-1]-i));
//	}
//	printf("\n");
//	
//	int *numPtr1;     // 단일 포인터 선언
//	int **numPtr2;    // 이중 포인터 선언
//	int num1 = 10;
//
//	numPtr1 = &num1;    // num1의 메모리 주소 저장 
//
//	numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장
//
//	printf("\n%d\n", **numPtr2);    // 20: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근
//
//
//
//	A a;
//	a.a = 20;
//	a.b = 1.234;
//	strcpy(a.c, "123");
//
//	unsigned char packet[12];
//	for (int i = 0; i < 12; i++) {
//		packet[i] = ((unsigned char*)&a)[i];
//	}
//
//	A b;
//
//	for (int i = 0; i < 12; i++) {
//		((unsigned char*)&b)[i] = packet[i];
//	}
//
//	float aaa = 1.23456;
//	int bbb = *(int*)&aaa;
//	aaa = *(int*)&bbb;
//	
//
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int *numPtrA;
//	void *ptr;
//	numPtrA = &numArr[2];
//	ptr = numArr;
//	printf("%d\n", *(numPtrA + 2));
//	printf("%d\n", *((int*)((char *)ptr+2)));
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
//
//#pragma warning (disable : 4996)
//
///*
//	첨부한 파일을 읽어서
//	학생별 평균을 학생 성적들 가장 오른쪽에,
//	과목별 평균을 과목의 가장 아래쪽에
//	추가한 파일 score_result.txt를 생성하는 프로그램을 작성하시오.
//*/
//
//#define SIZE(value) (sizeof(value) / sizeof(value[0]))
//
//int main(void)
//{
//	FILE* reader = NULL;
//	FILE* writer = NULL;
//
//	reader = fopen("score.txt", "r");
//	writer = fopen("score_result.txt", "w");
//
//	if (reader == NULL || writer == NULL) {
//		printf("파일 열기 실패\n");
//		return 0;
//	}
//
//	printf("파일 열기 성공\n");
//
//	double scoreList[5] = { 0 };
//	
//	for (int i = 0; i < 6; i++) {
//		char name[10] = { 0 };
//		fscanf(reader, "%s", name);
//		fprintf(writer, "%s\t", name);
//	}
//	fprintf(writer, "평균\n");
//
//	int cnt;
//	for (cnt = 0; 1; cnt++) {
//		char name[10] = { 0 };
//		fscanf(reader, "%s", name);
//
//		if (feof(reader)) {
//			break;
//		}
//
//		fprintf(writer, "%s\t", name);
//		
//		double sum = 0;
//		for (int i = 0; i < SIZE(scoreList); i++) {
//			int score;
//			fscanf(reader, "%d", &score);
//			fprintf(writer, "%d\t", score);
//
//			scoreList[i] += score;
//			sum += score;
//		}
//		sum /= SIZE(scoreList);
//
//		fprintf(writer, "%.2lf\n", sum);
//	}
//
//	double sum = 0;
//	fprintf(writer, "평균\t");
//	for (int i = 0; i < SIZE(scoreList); i++) {
//		double avg = scoreList[i] / cnt;
//		fprintf(writer, "%.2lf\t", avg);
//		sum += avg;
//	}
//	fprintf(writer, "%.2lf", sum / SIZE(scoreList));
//
//
//	fclose(writer);
//	fclose(reader);
//}
//
//
//
////int main()
////{
////	FILE *rfp = fopen("input.txt", "r");
////	FILE *wfp = fopen("output.txt", "w");
////	char buf[1024] = { 0 };
////	char grade[5] = { 0 };
////
////	if (rfp == NULL || wfp == NULL) {
////		printf("파일 열기 실패\n");
////		return 0;
////	}
////	else {
////		printf("파일 열기 성공\n");
////		while (fgets(buf, 1024, rfp) != NULL)
////		{
////			int len = strlen(buf);
////			int index = 0;
////			for (int i = 0; i < len; i++) {
////				if (buf[i] == ',') {
////					index = 0;
////					buf[0] = 0;
////					buf[1] = 0;
////					buf[2] = 0;
////				}
////				if ( '0' <= buf[i] && buf[i] <= '9' ) {
////					grade[index++] = buf[i];
////				}
////			}
////			fputs(buf, wfp);
////		}
////	}
////}
//
//
////int main() {
////	int arr[5][5] = {0};
////	int *ary = arr[0];
////	int cnt = 0;
////	int line = 5;
////
////	for (int i = 1; i <= 5; i++) {
////		for (int j = line - i; j < line; j++) {
////			ary[j] = ++cnt;
////		}
////		line += 5;
////	}
////
////	for (int i = 0; i < 25; i++) {
////		cout << "\t" << ary[i];
////		if ((i + 1) % 5 == 0) {
////			cout << endl;
////		}
////	}
////
////	cout << endl << endl;
////
////	for (int i = 0; i < 25; i++) {
////		ary[i] = 0;
////	}
////
////	cnt = 0;
////	line = 0;
////	for (int i = 0; i < 5; i++) {
////		for (int j = i; j < 5; j++) {
////			ary[line+j] = ++cnt;
////		}
////		line += 4;
////	}
////
////	for (int i = 0; i < 25; i++) {
////		cout << "\t" << ary[i];
////		if ((i+1) % 5  == 0) {
////			cout << endl;
////		}
////	}
////
////}
//
////struct car {
////	char *name;
////	char *color;
////	int product;
////};
////
////void print(struct car *C) {
////	cout << C->name << endl << C->color << endl;
////}
////
////int main() {
////	car C[30];
////	char n[30] = "개나소나타";
////	char c[30] = "깜장색";
////
////	C[0].name = n;
////	C[0].color = c;
////	C[0].product = 20190402;
////
////	print(C);
////
////	
////}