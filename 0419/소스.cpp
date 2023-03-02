#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	//int n, vn,sum = 0 , count = 0;
	//cin >> n;
	//stack<int> s;
	//for (int i = 0; i < n; i++)
	//{
     //		cin >> vn;
	//	if (vn == 0)
	//	{
	//		s.pop();
	//		count--;
	//	}
	//	else
	//	{
	//		s.push(vn);
	//		count++;
	//	}
	//}
	//for (int j = 0; j < count; j++)
	//{
	//	sum += s.top();
	//	s.pop();
	//}
	//cout << sum;
	int result = 0,temp = 0, count = 0;
	stack<int> s;
	char a;
	
	string str;
	cin >> str;
	getline(cin, str);
	for (int k = 0; k < str.size(); k++)
	{
		if (str[k] == ' '|| str[k] == '*' || str[k] == '+' || str[k] == '-' )
			continue;
	}
	int i = 0;
	
	while (i<str.size())
	{
		a = (char)str[i++];
		if (a == '*')
		{
			temp = s.top();
			s.pop();
			result = temp * (s.top());
			s.top() = result;
		}
		else if (a == '+')
		{
			temp = s.top();
			s.pop();
			result = temp + s.top();
			s.top() = result;
		} 
		else if (a == '-')
		{
			temp = s.top();
			s.pop();
			result = temp - s.top();
			s.top() = result;
		}
		else
		{
			s.push(a-48);
		}
	}
	cout << s.top() - 48;
}