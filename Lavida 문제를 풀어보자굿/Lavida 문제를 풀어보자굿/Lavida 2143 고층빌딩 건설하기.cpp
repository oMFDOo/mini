//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef struct Point {
//	int B;
//	int H;
//};
//
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int P, W, D;
//		vector<Point> b;
//		scanf("%d", &P);
//		scanf("%d", &W);
//		D = W / 100;
//		for (int i = 0; i < P; i++) {
//			Point q;
//			scanf("%d", &q.B);
//			b.push_back(q);
//
//		}
//		for (int i = 0; i < P; i++) {
//			scanf("%d", &b[i].H);
//		}
//
//
//		while (D > 0) {
//			sort(b.begin(), b.end(), [](Point a, Point b) { return a.B < b.B; });
//			b[0].B = b[0].B + b[0].H;
//			D--;
//		}
//		sort(b.begin(), b.end(), [](Point a, Point b) { return a.B < b.B; });
//		printf("%d\n", b[0].B);
//	}
//}