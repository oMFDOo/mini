#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int lab[10][10], lab_[10][10];

bool build(pair<int, int> c1, pair<int, int> c2, pair<int, int> c3) {
	if (lab[c1.first][c1.second] != 0 ||
		lab[c2.first][c2.second] != 0 ||
		lab[c3.first][c3.second] != 0) {
		return false;
	}
	for (int i = 0; i <= n + 1; i++) {
		for (int j = 0; j <= m + 1; j++) {
			lab_[i][j] = lab[i][j];
		}
	}

	lab_[c1.first][c1.second] = 1;
	lab_[c2.first][c2.second] = 1;
	lab_[c3.first][c3.second] = 1;
	return true;
}

void Flood(int x, int y) {
	if (x<0 || x > n + 1 || y < 0 || y > m + 1) { return; }
	lab_[x][y] = 2;
	if (lab_[x][y + 1] == 0) { Flood(x, y + 1); }
	if (lab_[x][y - 1] == 0) { Flood(x, y - 1); }
	if (lab_[x + 1][y] == 0) { Flood(x + 1, y); }
	if (lab_[x - 1][y] == 0) { Flood(x - 1, y); }
}
int Count() {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			count += lab_[i][j] == 0;
		}
	}
	return count;
}

int main()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			lab[i][j] = 1;
		}
	}

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> lab[i][j];
		}
	}


	vector<pair<int, int> > coords;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			coords.push_back(make_pair(i, j));
		}
	}

	int res = 0;
	for (int i = 0; i < coords.size(); i++) {
		for (int j = i + 1; j < coords.size(); j++) {
			for (int k = j + 1; k < coords.size(); k++) {
				if (!build(coords[i], coords[j], coords[k])) { continue; }

				for (int x = 1; x <= n; x++) {
					for (int y = 1; y <= m; y++) {
						if (lab[x][y] == 2) { Flood(x, y); }
					}
				}

				res = max(res, Count());
			}
		}
	}
	cout << res << endl;
}