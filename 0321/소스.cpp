#include<iostream>
using namespace std;
int main()
{
	//최대공약수
	int a, b, c;
	cin >> a >> b >> c;
	int lenth = a > b ? a > c ? a : c : b > c ? b : c;
	for (int i = lenth; i >= 0; i--)
	{
		if (a % i == 0 && b % i == 0 && c % i == 0)
		{
			cout << i;
			return 0;
		}

	}
}