#include<iostream>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	//�̼� ����Ž��
	//cin���� �ϳ� �޾Ƽ� �װ� ��� �ε����� �ִ���
	//ã�� ���ѱ׷� �ۼ�
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