#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int b;
	cin >> b;
	vector<int>v;
	for (int i = 0; i < 5; i++)
	{
		int a;
		cin >> a;
		if (a >= b)
		{
			cout << 1 << " " << i + 1;
			return 0;
		}
	}
	cout << 0;
}