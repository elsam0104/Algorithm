#include<iostream>
using namespace std;
int quick[10];
int quickSort(int pivot, int max, int min);
int main()
{
	for (int i = 0; i < 10; i++)
	{
		cin >> quick[i];
	}
	//버블정렬 과정
	/*cout << "버블정렬 과정입니다. 10개의 수를 입력해주세요." << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				int temp = bubble[j];
				bubble[j] = bubble[j + 1];
				bubble[j + 1] = temp;
			}
		}
		for (int k = 0; k < 10; k++)
		{
			cout << bubble[k] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		cout<< bubble[i]<<" ";
	}*/
	//선택정렬 과정
	/*int i,j,min, temp, index = 0;
	for (i = 0; i < 10; i++)
	{
		min = 100;
		for (j = i; j < 10; j++) 
		{
			if (min > select[j])
			{
				min = select[j];
				index = j;
			}
		}
		temp = select[i];
		select[i] = select[index];
		select[index] = temp;
		for (int k = 0; k < 10; k++)
		{
			cout << select[k] << " ";
		}
		cout << endl;
	}*/
	//삽입정렬 과정
	/*int i, j, temp,current = 0;
	for (i = 0; i < 9; i++)
	{
		j = i;
		while (insert[j] > insert[j + 1])
		{
			temp = insert[j];
			insert[j] = insert[j + 1];
			insert[j + 1] = temp;
			j--;
		}
		for (int k = 0; k < 10; k++)
		{
			cout << insert[k] << " ";
		}
		cout << endl;
	}*/

	int i, j, k,indexj,indexk,pivotIndex = 0, pivot = quick[0], temp;
	for (i = 0; i < 10; i++)
	{
		//큰 값 찾기
		for (j = i+1; j < i; j++)
		{
			indexj = j;
		}
		//작은 값 찾기
		for (k = 9; k > i; k--)
		{
			indexk = k;
		}
		if (indexk > indexj)
		{
			temp = quick[pivotIndex];
			quick[pivotIndex] = quick[indexk];
			quick[indexk] = temp;

			pivotIndex += 1;
		}
	}

	for (int k = 0; k < 10; k++)
	{
		cout << quick[k] << " ";
	}
	quickSort(0, 0, 9);
}

int quickSort(int pivot, int max, int min)
{
	quickSort(pivot, max + 1, min - 1);
}
