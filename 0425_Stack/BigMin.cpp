#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main()
{
	stack<char> s1, s2;
	string a, b;
	stack<int> ans;
	int extra = 0,extraDum = 0;
	int isMin = 1;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
		s1.push(a[i]);
	for (int i = 0; i < b.size(); i++)
		s2.push(b[i]);
	//ū�� �տ� ���Բ� ����
	if (a.size() < b.size())
	{
		swap(s1, s2);
		isMin = -1;
	}
	//���� �ڸ����� ������ ���ڸ��� ���� ��
	else if (a.size() == b.size())
	{
		for (int i = 0; i < a.size(); i++)
		{
			//1123456
			//1115111
			if (i >= b.size())
				break;
			if (a[i] < b[i])
			{
				swap(s1, s2);
				isMin = -1;
				break;
			}
		}
	}

	///1.�׳� �� �� ���� ��
	/// 999-123
	
	while (!s1.empty() && !s2.empty())
	{
		int x1 = s1.top() - '0'; 
		int x2 = s2.top() - '0';
		ans.push((x1 - x2 + extra) % 10);
		s1.pop();
		s2.pop();
		if (x1 - extra - x2 + extraDum >= 0)
			extra = 0;
		else
		{
			if (extraDum == 10)
			{
				extra = 1;
			}
			else if (x1 - 1 == 0)
			{
				s1.top() = 9;
			}
			extraDum = 10;
		}
	}
	///2.�����;� �� ��
	if (extra > 0)
	{
		if (s1.empty()) 
		{
			extra = 0;
		}
		else
		{
			while (!s1.empty())
			{
				int x = s1.top() - 48;
				ans.push(x);
				s1.pop();
			}
		}
	///3.�����ðǵ� 99910 �̷� ������ �����;� �� ��
	}
	
	while (!ans.empty())
	{
		cout << ans.top() * isMin;
		isMin = 1;
		ans.pop();
	}
}