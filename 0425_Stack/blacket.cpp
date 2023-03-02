#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	stack<int> ans;
	string str;
	int left = 0;
	cin >> str;
	if (str[0] == ')' || str[str.size() - 1] == '(')
	{
		cout << "bad";
	}
	else
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
			{
				ans.push(++left);
			}
			else if (str[i] == ')')
			{
				if (ans.empty())
				{
					cout << "bad";
					return 0;
				}
				ans.pop();
				left--;
			}
		}
		if (!ans.empty())
			cout << "bad";
		else
			cout << "good";
	}
}