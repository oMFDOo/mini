//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#pragma warning(disable:4996)
//
//struct list {
//	char word[26];
//	int minus;
//};
//
//int main() {
//	int t;
//	scanf("%d", &t);
//	while (t--) {
//		int m, n;
//		char sentence[26] = "";
//		struct list a[10];
//
//		scanf("%d %d", &m, &n);
//		for (int i = 0; i < m; i++) {
//			scanf("%s %d", a[i].word, &a[i].minus);
//		}
//
//		for (int i = 0; i < m; i++) {
//			int len = strlen(a[i].word);
//			for (int j = 0; j < len; j++) {
//				if (isupper(a[i].word[j])) {
//					a[i].word[j] = tolower(a[i].word[j]);
//				}
//			}
//		}
//
//		while (n--) {
//			int score = 0;
//			while (1) {
//				int count = 0;
//				scanf("%s", sentence);
//
//				if (!strcmp(sentence, ".")) {
//					break;
//				}
//
//				for (int j = 0; j < strlen(sentence); j++) {
//					if (isupper(sentence[j])) {
//						sentence[j] = tolower(sentence[j]);
//					}
//				}
//
//				for (int i = 0; i < m; i++) {
//					if (!strcmp(sentence, a[i].word)) {
//						score -= a[i].minus;
//						count++;
//					}
//				}
//
//				if (count == 0) {
//					score += strlen(sentence) % 10;
//				}
//			}
//			printf("%d\n", score);
//		}
//	}
//
//	return 0;
//}