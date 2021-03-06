#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

const int LIMIT = 5000001;
bool b[LIMIT] = { 1, 1, 0 };

void Prime4() {
	int sqrtlimit = (int)sqrt(LIMIT);

	for (int i = 2; i <= sqrtlimit; i++) {
		if (!b[i]) {
			for (int j = i * i; j < LIMIT; j = j + i) {
				b[j] = 1;
			}
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);

	Prime4();

	while (t--) {
		int count = 0;
		int m, n;
		scanf("%d %d", &m, &n);

		if (m > n) {
			n = m;
		}

		for (int i = m; i <= n - 12; i++) {
			if (b[i] == 0 && b[i + 6] == 0 && b[i + 12] == 0) {
				printf("%d: %d-%d-%d\n", count+1, i, i+6, i+12);
				count++;
			}
		}

		if (count == 0) {
			printf("No Sexy Prime Triplets!\n");
		}

	}
}