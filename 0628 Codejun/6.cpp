#include<iostream>
#include<vector>
using namespace std;
int n, m;
int cnt;
int maxEq;
vector<int> v;
void func(int cur, int last, int eq)
{
	if (cnt >= n)
	{
		cout << "������ �¸�!" << endl;
		cout<<"���߿� ������ "<< n*maxEq* 10000 <<"���� ȹ���Ͽ���!";
		return;
	}
	if (eq == m)
	{
		cout << "��û�ڵ��� �¸�!"<<endl;
		cout << n * cnt <<"���� ��û�ڵ��� �������� �޾Ҵ�!";
		return;
	}
	if (cur == last)
	{
		eq++;

		if (eq > maxEq)
			maxEq = eq;
	}
	else
	{
		eq = 0;
	}
	func(v[cnt++ + 1], cur, eq);
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	func(0, -1, 0);
}