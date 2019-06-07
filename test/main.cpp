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
		return ans = "������ ������� ������� �������!";
	}
	if (!cin.good() || req > 7 || req < 1)
	{
		return ans = "������ ������� ������� �������!";
	}
	ish--;
	req--;
	queue<int> Queue;
	stack<Edge> Edges;
	Edge e;
	int nodes[7]; // ������� �����
	for (int i = 0; i < 7; i++) // ������� ��� ������� ����� 0
		nodes[i] = 0;
	Queue.push(ish); // �������� � ������� ������ �������
	while (!Queue.empty())
	{
		int node = Queue.front(); // ��������� �������
		Queue.pop();
		nodes[node] = 2; // �������� �� ��� ����������
		for (int j = 0; j < 7; j++)
		{
			if (mas[node][j] == 1 && nodes[j] == 0)
			{ // ���� ������� ������� � �� ����������
				Queue.push(j); // ��������� �� � �������
				nodes[j] = 1; // �������� ������� ��� ������������
				e.begin = node; e.end = j;
				Edges.push(e);
				if (node == req) break;
			}
		}
		cout << node + 1 << endl; // ������� ����� �������
	}
	cout << "���� �� ������� " << req + 1 << endl;
	ans += to_string(req+1);
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