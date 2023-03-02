#include<iostream>
using namespace std;
int main()
{
//1371
//input = 5
//	----**
//	---*--*
//	--*----*
//	-*------*
//	*--------*
//	*--------*
//	-*------*
//	--*----*
//	---*--*
//	----**

	int n; 
	cin >> n;
	int num = n - 1;
	int m = n / 2;
	for (int i = 0; i < n * 2; i++)
	{
		if (i == 0 || i == n - 1)
		{
			for (int i = 0; i < n-1; i++)
				cout << " ";
			for (int i = 0; i < (n / 2); i++)
				cout << "*";
			cout << endl;
		}
		else
		{
			for (int i = 0; i < num--; i++)
				cout << " ";
			cout << "*";
			for (int i = 1; i < (n - 1)* 2; i += 2)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}
}