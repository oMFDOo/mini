//#include <iostream>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int cnt = 0;
//		string sentence, keyWord;
//		bool word[60] = {0};
//
//		cin >> sentence >> keyWord;
//
//		for (int i = 0; i < keyWord.length(); i++) {
//			if (isalpha(keyWord[i])) {
//				keyWord[i] = toupper(keyWord[i]);
//			}
//			word[keyWord[i] - '!'] = true;
//		}
//
//		for (int i = 0; i < sentence.length(); i++) {
//			if (isalpha(sentence[i])) {
//				sentence[i] = toupper(sentence[i]);
//			}
//		}
//
//		int index = 0;
//		for (int i = 0; i < keyWord.length(); i++) {
//			for (int j = index; j < sentence.length(); j++) {
//				if (keyWord[i] == sentence[j]) {
//					index = j + 1;
//					word[keyWord[i] - '!'] = false;
//					break;
//				}
//			}
//		}
//
//		bool result = true;
//		for (int i = 0; i < 60; i++) {
//			if (word[i]) {
//				result = false;
//				break;
//			}
//		}
//		if (result) {
//			cout << "YES\n";
//		}
//		else {
//			cout << "NO\n";
//		}
//	}
//}