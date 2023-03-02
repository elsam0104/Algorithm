#include<iostream>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	//미션 순차탐색
	//cin으로 하나 받아서 그게 어디 인덱스에 있는지
	//찾는 프롤그램 작성
	int arr[10] = { 5,7,13,3,0,1,6,9,11,100 };
	int input;
	cin >> input;
	for (int i = 0; i < 10; i++)
	{
		if (input == arr[i])
		{
			cout << i;
			break;
		}
	}
}