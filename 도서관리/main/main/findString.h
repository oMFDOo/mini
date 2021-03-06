#pragma once
#include "bookData.h"


using namespace std;

/*
	목적 : 이미 탐색해서 일치하지 않음을 안 인덱스를 뛰어넘음으로 시간 낭비를 줄임
	매개변수 : 입력값
	반환 : 입력 가능한 공간의 인덱스
*/
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

/*
	목적 : 이미 탐색해서 일치하지 않음을 안 인덱스를 뛰어넘음으로 시간 낭비를 줄임
	매개변수 : 비교 대상, 입력값
	반환 : 입력 가능한 공간의 인덱스
*/
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

/*
	목적 : 검색어와 일치하는 책 찾기
	매개변수 : 입력 검색어, 검색 타입( 책 이름으로 검색, 작가 이름으로 검색)
	반환 : 일치하는 값이 있는 경우 그 값의 인덱스를 matchPoint배열의 인덱스로 사용하여 그 값을 참으로 만들어줌. 
*/
void getMatch(string input, int type) {
	for (int i = 0; i < sizeof(presenceOfInfo); i++) {
		matchPoint[i] = 0;
	}

	// 책 이름 검색시
	if (type == 1) {
		for (int i = 0; i < sizeof(presenceOfInfo); i++) {
			auto match = kmp(LB[i].name, input);
			matchPoint[i] = (int)match.size();
		}
	}
	// 작가 이름 검색시
	else if (type == 2) {
		for (int i = 0; i < sizeof(presenceOfInfo); i++) {
			auto match = kmp(LB[i].author, input);
			matchPoint[i] = (int)match.size();	// 사이즈
		}
	}
}