#pragma once
#include "bookDatas.h"


using namespace std;

vector<int> getpos(string p) {
	int m = (int)p.size(), j = 0;
	vector<int> pos(m, 0);
	for (int i = 1; i < m; i++) {
		while (j > 0 && p[i] != p[j]) {
			j = pos[j - 1];
		}
		if (p[i] == p[j]) {
			pos[i] = ++j;
		}
	}
	return pos;
}

vector<int> kmp(string s, string p) {
	vector<int> ans;
	auto pos = getpos(p);
	int n = (int)s.size(), m = (int)p.size(), j = 0;
	for (int i = 0; i < n; i++) {
		while (j > 0 && s[i] != p[j]) {
			j = pos[j - 1];
		}
		if (s[i] == p[j]) {
			if (j == m - 1) {
				ans.push_back(i - m + 1);
				j = pos[j];
			}
			else {
				j++;
			}
		}
	}
	return ans;
}

void getMatch(string input, int type) {
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		matchPoint[i] = 0;
	}

	if (type == 1) {
		for (int i = 0; i < sizeof(presenceOfInfo); i++) {
			auto match = kmp((LB + i)->name, input);
			matchPoint[i] = (int)match.size();
		}
	}
	else if (type == 2) {
		for (int i = 0; i < sizeof(presenceOfInfo); i++) {
			auto match = kmp((LB + i)->author, input);
			matchPoint[i] = (int)match.size();
		}
	}
}