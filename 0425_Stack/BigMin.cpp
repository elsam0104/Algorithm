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
	//큰게 앞에 오게끔 스왑
	if (a.size() < b.size())
	{
		swap(s1, s2);
		isMin = -1;
	}
	//만약 자릿수가 같으면 앞자리수 부터 비교
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

	///1.그냥 뺄 수 있을 때
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
	///2.빌려와야 할 때
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
	///3.빌려올건데 99910 이런 식으로 가져와야 할 때
	}
	
	while (!ans.empty())
	{
		cout << ans.top() * isMin;
		isMin = 1;
		ans.pop();
	}
}