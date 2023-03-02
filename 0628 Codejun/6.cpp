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
		cout << "선한의 승리!" << endl;
		cout<<"개발왕 선한은 "<< n*maxEq* 10000 <<"원을 획득하였다!";
		return;
	}
	if (eq == m)
	{
		cout << "시청자들의 승리!"<<endl;
		cout << n * cnt <<"명의 시청자들이 구독권을 받았다!";
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