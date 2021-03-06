//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//typedef struct edge {
//	// row, column
//	int row, column;
//}edge;
//
//int Row, Column;
//
//int positionsX[4] = { 0, -1, 0, 1 };
//int positionsY[4] = { -1, 0, 1, 0 };
//
//int visited[105][105];
//
//bool validPosition(int r, int c, vector<vector<char>>& graph) {
//	bool result;
//
//	if ((r < Row && r >= 0) && (c < Column && c >= 0)) {
//		result = (graph[r][c] == '-' || graph[r][c] == 'E') ? true : false;
//	}
//	else {
//		result = false;
//	}
//
//	return result;
//}
//
//int bfs(edge start, edge end, vector<vector<char>>& graph) {
//	queue<edge> s;
//	s.push(start);
//	visited[start.row][start.column] = 0;
//	while (s.empty() == false) {
//		edge top = s.front();
//		s.pop();
//
//		if (end.row == top.row && end.column == top.column) {
//			return visited[top.row][top.column];
//		}
//
//		for (int i = 0; i < 4; ++i) {
//			int newr = top.row + positionsX[i];
//			int newc = top.column + positionsY[i];
//
//			if (validPosition(newr, newc, graph)) {
//				if (visited[newr][newc] == -1) {
//					visited[newr][newc] = visited[top.row][top.column] + 1;
//
//					edge node = { newr, newc };
//					s.push(node);
//				}
//			}
//		}
//	}
//
//	return -1;
//}
//
//int main(int argc, char* argv[]) {
//
//	edge start{ 0, }, end{ 0, };
//
//	int testCase;
//	cin >> testCase;
//	while (testCase--) {
//		cin >> Row >> Column;
//
//		for (int i = 0; i < sizeof(visited) / sizeof(int); i++) {
//			visited[0][i] = -1;
//		}
//
//		vector<vector<char>> graph;
//
//		for (int y = 0; y < Row; y++)
//		{
//			vector<char> row;
//			for (int x = 0; x < Column; x++)
//			{
//				char input;
//				cin >> input;
//
//				if (input == 'S') {
//					start.row = y; start.column = x;
//				}
//				else if (input == 'E') {
//					end.row = y; end.column = x;
//				}
//
//				row.push_back(input);
//			}
//			graph.push_back(row);
//		}
//
//		int result = bfs(start, end, graph);
//		(result == -1) ? printf("-1\n") : printf("%d\n", result);
//	}
//	return 0;
//}