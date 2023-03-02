#include<iostream>
#include<stack>
using namespace std;
int main()
{
	//c의 stdio와 cpp의 iostream 동기화 비활성화
	//c++만의 독립적인 버퍼가 생김
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
		while (!cow.empty() && cow.top() <= a) //입력받은 소가 보여지는 만큼을 남긴다.
		{
			cow.pop();
		}
		cnt += cow.size();
		cow.push(a);
	}
	cout << cnt;
}