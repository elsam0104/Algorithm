#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<int> a;
	stack<int> b;
	string stra;
	string strb;
	stack<char> result;
	int count = 0;
	cin >> stra;
	cin >> strb;

	for (int i = 0; i < stra.size(); i++)
		a.push(stra[i] - 48);
	for (int i = 0; i < strb.size(); i++)
		b.push(strb[i] - 48);
	/*for (int i = stra.size() - 1; i>= 0; i--)
		a.push(stra[i] - 48);
	for (int i = strb.size() - 1; i>=0; i--)
		b.push(strb[i] - 48);*/
	int length = stra.size() > strb.size() ? stra.size() : strb.size();
	for (int i = 0; i < length; i++)
	{
		if (a.empty() || b.empty())
		{
			if (a.empty())
			{
				result.push(b.top() + 48);
				b.pop();
			}
			else
			{
				result.push(a.top() + 48);
				a.pop();
			}
			continue;
		}
		int math = a.top() + b.top();
		a.pop();
		b.pop();
		if (math >= 10)
		{
			result.push(math % 10 + 48);
			//result = (result * 10) + math % 10;
			if(a.empty()&&b.empty())
			{
				result.push(49);
			}
			else if (a.empty())
			{
				b.top() = b.top() + 1;
			}
			else if (b.empty())
			{
				a.top() = a.top() + 1;
			}
		}
		else
		{
			result.push(math + 48);
			//result = result * 10 + math;
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << (int)result.top() - 48;
		result.pop();
	}
}