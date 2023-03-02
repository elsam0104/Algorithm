#include<iostream>
using namespace std;

int main()
{

	//int n, m;
	//cin >> n >> m;
	//if (n <= 1) cout << 0;
	//else if (n == 2) cout << m;
	//else cout << m * 2;

	int cards, star, people;
	cin >> cards >> star >> people;

	if (cards / people >= star)
	{
		cout << star;
	}
	/*else if ( m % (n / k) == 0)
	{
		if (m % 2 == 0)
			cout << 0;
		else
			cout << 1;
	}*/
	else
	{
		cout << cards / people - (star - cards / people) / (people - 1 ) - 1;
	}

}