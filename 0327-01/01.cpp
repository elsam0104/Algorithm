#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int company[2000] = { 0, };
	int count = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
		cin >> company[i];


	for (int i = 0; i < count; i++)
	{
		int rank = count;
		for (int j = 0; j < count; j++)
		{
			if (company[i] > company[j + 1])
				rank--;
		}
		cout << rank << endl;
	}
}
	//1417
	/*int height[10] = {0,};
	for (int i = 0; i < 10; i++)
		cin >> height[i];
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (height[j] > height[j + 1])
			{
				int temp = height[j];
				height[j] = height[j + 1];
				height[j + 1] = temp;
			}
		}
	}
	cout << height[7];*/
	//2621
	/*int sum = 0, input;
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
			sum += i;
	}
	cout << sum;*/
	//2009
	/*int remain,get,count = 0;
	cin >> remain >> get;
	int repeat = remain;
	for (int i = 0; i < repeat; i++)
	{
		if (remain / get > 0)
		{
			count++;
			++remain -= get;
		}
	}
	cout << count;*/
	//1705
	//1. �ڽ��� ���ʰ� �Ǿ��� �� ���ڿ� 3�̳� 6�̳� 9�� �� �� ���� "K"�� ����Ѵ�.
	//2. ���� ���ڿ� 3�̳� 6�̳� 9�� �� �� ���� "KK"�� ����Ѵ�.
	//3. ���� ���ڿ� 3�̳� 6�̳� 9�� �� �� ���� "KKK"�� ����Ѵ�.
	//4. �� ������ ���� 999�� �Ǹ� ������ ���̳���.(�� ū ���ڴ� �Էµ��� �ʴ´�.)
	//5. �� ���� ���ڵ��� �׳� �״�� ����Ѵ�.
	//char input[3] = {};
	//int count = 0;
	//cin >> input[0] >> input[1] >> input[2];
	//if (input[0] == '3' || input[0] == '6' || input[0] == '9')
	//	count++;
	//if (input[1] == '3' || input[1] == '6' || input[1] == '9')
	//	count++;
	//if (input[2] == '3' || input[2] == '6' || input[2] == '9')
	//	count++;
	//switch (count)
	//{
	//case 3:
	//	cout << "KKK";
	//	break;
	//case 2:
	//	cout << "KK";
	//	break;
	//case 1:
	//	cout << "K";
	//	break;
	//default:
	//	cout << input;
	//	break;
	//}

	//1676 �õ�
	//char company[2000] = { };
	//int input[2000] = {};
	//int count = 0,num=0;
	//cin >> count;
	//while (count-- != 0)
	//{
	//	cin >> input[num];
	//	company[num++] = input[num];
	//}
	//for (int i = 0; i < strlen(company) -1; i++)
	//{
	//	for(int j = 0; j<strlen(company)-i-1;j++)
	//	{
	//		if (company[j] > company[j+1])
	//		{
	//			char temp = company[j];
	//			company[j] = company[j+1];
	//			company[j+1] = temp;
	//		}
	//	}
	//}
	//cout << endl;
	//for (int i = 0; i < strlen(company); i++)
	//{
	//	for (int j = 0; j < strlen(company); j++)
	//	{
	//		if (input[i] == (int)company[j] )
	//			cout << j <<endl;
	//	}
	//	//cout << input[i]<<" "<<(int)company[i] << endl;
	//}
	
	//1618
	/*
	int weight[3];
	int temp = 0;
	cin >> weight[0] >> weight[1] >> weight[2];


	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			if (weight[j] > weight[j + 1])
			{
				temp = weight[j];
				weight[j] = weight[j + 1];
				weight[j + 1] = temp;
			}
		}
	}
	cout << weight[0] << " " << weight[1] << " " << weight[2];
	*/