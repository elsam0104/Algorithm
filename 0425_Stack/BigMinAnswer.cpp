#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<char>s1, s2;
	stack<int> ans;
	string a, b;
	cin >> a;
	cin >> b;
	bool minus = false;
	int cnt = 0;
	//a가 더 크게끔
	if (a.size() < b.size())
	{
		swap(a, b);
		minus = true;
	}  
	// 같으면?
	// 앞에서부터 하나라도 크면 체인지, 플래그 체크
	else if (a.size() == b.size())
	{
		cnt = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] > b[i]) break;
			else if (a[i] < b[i])
			{
				cnt++;
				break;
			}
			if (cnt != 0)
			{
				swap(a, b);
				minus = true;
			}
		}
	}
	for (int i = 0; i < a.size(); i++) s1.push(a[i]);
	for (int i = 0; i < b.size(); i++) s2.push(b[i]);

	int extra = 0;
	while (!s1.empty() && !s2.empty())
	{
		int x1 = s1.top() - 48;
		int x2 = s2.top() - 48;
		s1.pop();
		s2.pop();
		//그냥 뺼 수 있을 떄 12345 - 123
		if (x1 - x2 - extra >= 0)
		{
			ans.push(x1 - x2 - extra);
			extra = 0;
		}
		//빌려와야 할 때     12345-56
		else
		{
			ans.push(x1 - x2 - extra + 10);
			extra = 1;
		}
	}
	//s1이 비어있지 않는 동안 반복
	while (!s1.empty())
	{
		int x1 = s1.top() - 48;
		s1.pop();

		//10234 - 567
		if (x1 - extra < 0)
		{
			ans.push(x1 - extra + 10);
			extra = 1;
		}
		//11234-567
		else
		{
			ans.push(x1 - extra);
			extra = 0;
		}
	}
	// 마이너스 체크
	if (minus == true)
		cout << '-';
	//두 수가 같았을 경우 체크
	int chk = 0;
	while (!ans.empty())
	{
		if (ans.top() != 0)
			chk++;
		if (chk != 0)
			cout << ans.top();
		ans.pop();
	}
		if (chk == 0)
			cout << 0;
}