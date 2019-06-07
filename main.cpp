#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
struct Edge {
	int begin;
	int end;
};
string findPath(int mas[7][7], int ish, int req)
{
	string ans;
	if (!cin.good() || ish > 7 || ish < 1)
	{
		return ans = "Первая вершина введена неверно!";
	}
	if (!cin.good() || req > 7 || req < 1)
	{
		return ans = "Вторая вершина введена неверно!";
	}
	ish--;
	req--;
	queue<int> Queue;
	stack<Edge> Edges;
	Edge e;
	int nodes[7]; // вершины графа
	for (int i = 0; i < 7; i++) // исходно все вершины равны 0
		nodes[i] = 0;
	Queue.push(ish); // помещаем в очередь первую вершину
	while (!Queue.empty())
	{
		int node = Queue.front(); // извлекаем вершину
		Queue.pop();
		nodes[node] = 2; // отмечаем ее как посещенную
		for (int j = 0; j < 7; j++)
		{
			if (mas[node][j] == 1 && nodes[j] == 0)
			{ // если вершина смежная и не обнаружена
				Queue.push(j); // добавляем ее в очередь
				nodes[j] = 1; // отмечаем вершину как обнаруженную
				e.begin = node; e.end = j;
				Edges.push(e);
				if (node == req) break;
			}
		}
		cout << node + 1 << endl; // выводим номер вершины
	}
	cout << "Путь до вершины " << req + 1 << endl;
	ans += to_string(req + 1);
	cout << req + 1;
	while (!Edges.empty()) {
		e = Edges.top();
		Edges.pop();
		if (e.end == req) {
			req = e.begin;
			ans += " - ";
			ans += to_string(req + 1);
			cout << " <- " << req + 1;
		}
	}
	cout << endl;
	return ans;
}
int main()
{
	system("chcp 1251");
	system("cls");
	int ish, req;
	int mas[7][7] = {
	{ 0, 1, 1, 0, 0, 0, 1 }, // 1
	{ 1, 0, 1, 1, 0, 0, 0 }, // 2
	{ 1, 1, 0, 0, 0, 0, 0 }, // 3
	{ 0, 1, 0, 0, 1, 0, 0 }, // 4
	{ 0, 0, 0, 1, 0, 1, 0 }, // 5
	{ 0, 0, 0, 0, 1, 0, 1 }, // 6
	{ 1, 0, 0, 0, 0, 1, 0 } // 7
	};
	cout << "1 edge: "; cin >> ish;
	//while (!cin.get() || ish > 7 || ish < 1)
	//{
	//	cerr << "Первая вершина введена неверно! Введите заного: \n";
	//	cin.clear();
	//	cin.ignore(cin.rdbuf()->in_avail());
	//	cout << "1 edge: ";
	//	cin >> ish;
	//}
	cout << "2 edge: "; cin >> req;
	//while (!cin.get() || req > 7 || req < 1)
	//{
	//	cerr << "Вторая вершина введена неверно! Введите заного: \n";
	//	cin.clear();
	//	cin.ignore(cin.rdbuf()->in_avail());
	//	cout << "2 edge: ";
	//	cin >> req;
	//}
	string result = findPath(mas, ish, req);
	cout << result;
	cout << endl;
	system("pause");
	return 0;
}