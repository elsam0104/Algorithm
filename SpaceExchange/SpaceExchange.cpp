#include<stack>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string black, d, answer;
stack<int> s;
vector<int> b;
int n, k, m;
int prec(char op)
{
	switch (op)
	{
	case'(':case')':
		return 0;
	case'+':case'-':
		return 1;
	case'*':case'/':
		return 2;
	}
}
string infixToPostfix(string infix)
{
	stack<int>st;
	string postfix = "";
	char ch;
	for (int i = 0; i < infix.size(); i++) {
		ch = infix[i];
		switch (ch) {
		case'+':case'-':case'*':case'/':
			while (!st.empty() && prec(ch) <= prec(st.top()))
			{
				postfix += st.top();
				st.pop();
			}
			st.push(ch);
			break;
		case'(':
			st.push(ch);
			break;
		case')':
			while (st.top() != '(')
			{
				postfix += st.top();
				st.pop();
			}
			st.pop();
			break;
		default:
			postfix += ch;
			break;
		}
	}
	while (!st.empty())
	{
		postfix += st.top();
		st.pop();
	}
	return postfix;
}
int main()
{
	cin >> black;
	cin >> d;
	if (infixToPostfix(black) == d)
	{
		cout << 404;
		return 0;
	}
	cin >> n >> k >> m;
	int result = 0;
	while (m / n != 0)
	{
		result = m % n;
		m /= n;
		s.push(result);
	}
	s.push(m);
	int num = 0;
	//32h
	vector<char> v;
	

	while (!s.empty())
	{
		if (s.top() >= 10)
		{
			char c = 65 + (s.top() % 10);
			v.push_back(c);
		}
		else
		{
			v.push_back(s.top() + '0');
		}
		s.pop();
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (i % (k+1) == 0)
		{
			v.insert(v.begin() + i, ',');
			i++;
		}
	}
	reverse(v.begin(), v.end());
	while (v.back() == ',')
		v.pop_back();
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}
}