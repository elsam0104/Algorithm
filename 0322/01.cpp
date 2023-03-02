#include<iostream>
using namespace std;

int main()
{
	int length;
	cin >> length;
	int count = 0,temp,temp2;

	for (int i = 1; i < length/3; i++)
	{
		for (int j = i; j < length - i/2; j++)
		{
			int x = length - (i + j);
			if(i<=j&& x)
			{
				if(i + j > x && x>0 && x<length-2 && i<=j && j<=x)
				{
					cout << i << " " << j << " "<< x << " "<<endl;
					count++;
				}
				
			}
		}
	}
	if (count == 0)
	{
		cout << -1;
	}
}