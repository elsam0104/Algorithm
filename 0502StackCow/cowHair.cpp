#include<iostream>
#include<stack>
using namespace std;
int main()
{
	//c�� stdio�� cpp�� iostream ����ȭ ��Ȱ��ȭ
	//c++���� �������� ���۰� ����
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	long long int num;
	stack<int> cow;

	cin >> num;

	long long int a;
	long long int cnt = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> a;
		while (!cow.empty() && cow.top() <= a) //�Է¹��� �Ұ� �������� ��ŭ�� �����.
		{
			cow.pop();
		}
		cnt += cow.size();
		cow.push(a);
	}
	cout << cnt;
}