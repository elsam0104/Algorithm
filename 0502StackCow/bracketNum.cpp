#include<iostream> 
#include<stack>
#include<string.h>
using namespace std;
int main()
{
	stack<string> s;
	int result = 0;
	int temp = 1;
	string str;

	cin >> str;
	//유효성 검사
	for (int i = 0; i < str.size(); i++)
	{
		if (str[0] == ')' && str[str.size() - 1] == '(')
		{
			cout << "0";
			return 0;
		}
		if (str[i] == '(' && str[i] == '[')
		{
			cout << "0";
			return 0;
		}
	}
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] == '[' && str[i - 1] == ')') || (str[i] == '(' && str[i - 1] == ']'))
		{
			result += temp;
			temp = 1;
		}
		if (str[i] == '(')
		{
			temp *= 2;
		}
		if (str[i] == ')')
		{
			temp *= 2;
			temp /= 2;
		}
		if (str[i] == '[')
		{
			temp *= 3;
		}
		if (str[i] == ']')
		{
			temp *= 3;
			temp /= 3;
		}
	}
	cout << result;
}