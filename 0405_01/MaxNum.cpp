#include<iostream>
using namespace std;
int arr[7];
int find(int a, int maxOdd,int maxEven)
{
	if (a == 7) return maxOdd + maxEven;
	
	if (arr[a] % 2 == 0)
	{
		maxEven = (arr[a] > maxEven ? arr[a] : maxEven);
	}
	else
	{
		maxOdd = (arr[a] > maxOdd ? arr[a] : maxOdd);
	}
		return find(++a, maxOdd, maxEven);
}

int main()
{
	for (int i = 0; i < 7; i++)
		cin >> arr[i];
	cout << find(0, 0, 0);
}