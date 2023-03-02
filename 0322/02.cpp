#include<iostream>
#include <cstring>
using namespace std;

int main()
{
	int height[10];
	int half[5];
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> height[i];
	}
	
	for (int i = 0; i <= 8; i += 2)
	{
		half[count++] = height[i] > height[i + 1] ? height[i] : height[i + 1];
		if (i == 8)
		{
			half[0] = half[0] > half[1] ? half[0] : half[1];
			half[1] = half[2] > half[3] ? half[2] : half[3];
			half[2] = half[4];
		}
	}
	int criminal = half[0] < half[1] ? half[0] < half[2] ? half[0] : half[2] : half[1] < half[2] ? half[1] : half[2];
	cout <<criminal;
}
#pragma region 이전 문제

	/*char input[20];
	cin >> input;
	for (int i = 0; i < strlen(input); i++)
	{
		char out = input[i] + 2;
		cout << out;
	}
	cout << endl;
	for (int i = 0; i < strlen(input); i++)
	{
		char out = (input[i] * 7) % 80 + 48;
		cout << out;
	}*/
	
	/*int sum = 0;
	char nums[11];
	cin >> nums;
	for (int i = 0; i < 10; i++)
	{
		sum += nums[i] - 48;
	}
	if (sum % 7 == 4)
	{
		cout << "suspect";
	}
	else
	{
		cout << "citizen";
	}*/

	/*char says[100];
	cin.getline(says, 100);
	
	for (int i = strlen(says)-1; i >= 0; i--)
	{
		cout << says[i];
	}*/
	/*int findsmall = 0, findbig = 0;
	char input[100];
	cin >> input;

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == smallc)
		{
			findsmall++;
			if (input[i + 1] == smallc || input[i + 1] == bigc)
				findbig++;
		}
		if (input[i] == bigc)
		{
			findsmall++;
			if (input[i + 1] == smallc || input[i + 1] == bigc)
				findbig++;
		}
	}
	cout << findsmall << endl << findbig;*/
	//int oddMax, evenMax,oddNum,evenNum; // ~Max는 실제로 큰 수, ~Num은 처음 임시로 넣은 수의 배열의 값
	//bool isMaxEven = false,isMaxOdd = false;
	//int input[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> input[i];
	//	if (input[i] % 2 == 0)
	//	{
	//		evenMax = input[i];
	//		evenNum = i;
	//	}
	//	else
	//	{
	//		oddMax = input[i];
	//		oddNum = i;
	//	}
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	if (input[i] % 2 == 0 && input[i] > evenMax) //even
	//	{
	//		evenMax = input[i];
	//		isMaxEven = true;
	//	}
	//	if (input[i] % 2 != 0 && input[i] > oddMax) //odd
	//	{
	//		oddMax = input[i];
	//		isMaxOdd = true;
	//	}
	//}
	//if (oddMax == input[oddNum])
	//	isMaxOdd = true;
	//if (evenMax == input[evenNum])
	//	isMaxEven = true;
	//if (isMaxOdd == true)
	//	cout << oddMax;
	//if (isMaxEven == true && isMaxOdd == true)
	//	cout << endl;
	//if (isMaxEven == true)
	//	cout << evenMax;
	/*int yut[4];
	int count = 0;
	cin >> yut[0] >> yut[1] >> yut[2] >> yut[3];
	for (int i = 0; i < 4; i++)
	{
		if (yut[i] == 1)
			count++;
	}
	switch count
	{
	case 4:
		cout << "윷";
		break;
	case 3:
		cout << "걸";
		break;
	case 2:
		cout << "개";
		break;
	case 1:
		cout << "도";
		break;
	default:
		cout << "모";
	}*/
#pragma endregion

#define smallc 99
#define bigc 67