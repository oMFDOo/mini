//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//#include <string>
//#include <list>
//#include <array>
//
//using namespace std;
//
//class Node {
//public:
//	Node* Left;
//	Node* Right;
//	Node* ptr[50];
//	int data;
//
//
//	/*Node(int init) {
//		data = init;
//	}
//	Node() {
//		data = 0;
//	}*/
//};
//
//class YeejinTree {
//private:
//	Node* FindNullptr(Node* node, string value) {
//		dnd?
//
//	}
//
//public:
//	Node* First;
//	bool Empty() {
//		return false;
//	}
//	bool Delete(int) {
//		return false;
//	}
//
//
//	void Insert(int value) {
//		if (First == nullptr) {
//			First = new Node();
//			First->data = value;
//			return;
//		}
//
//		Node* find = FindNullptr(First, value);
//		if (find->Left == nullptr) {
//			find->Left = new Node();
//			find->Left->data = value;
//		}
//		else {
//			find->Right = new Node();
//			find->Right->data = value;
//		}
//
//	}
//};
//
//bool FindDFS(Node* first, int value) {
//	cout << "value : " << first->data << endl;
//	if (first->data == value) {
//		return true;
//	}
//	if (first->Left != nullptr) {
//		if (FindDFS(first->Left, value)) {
//			return true;
//		}
//	}
//	if (first->Right != nullptr) {
//		if (FindDFS(first->Right, value)) {
//			return true;
//		}
//	}
//	return false;
//
//
//}
//
//int main() {
//
//	Node node;
//
//	int TC;
//	cin >> TC;
//	while (TC--) {
//
//	}
//
//}