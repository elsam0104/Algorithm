#include<iostream>
using namespace std;
int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int number = 10;
void quickSort(int* arr, int start, int end);
int main()
{
	cout << "The Process of quick sort." << endl;
	quickSort(arr, 0, number - 1);
	cout << "The result of quick sort." << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}
void quickSort(int* arr, int start, int end)
{
	//���Ұ� 1���� ���
	if (start >= end) return;

	int pivot = start;
	int i = start + 1;	//ū �� ã�� ��
	int j = end;		//���� �� ã�� ��
	int temp;
	//ū ����e ���� ���� ã�Ҵٸ�

	//�����ȴٸ� .. ������ �� ����
	while (i <= j)
	{
		//i�� ã�� �� ����
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[j] >= arr[pivot])
			j--;
		//������
		if (i > j)
		{
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	for (int k = 0; k < 10; k++)
		cout << arr[k] << " ";
	cout << endl;
	quickSort(arr, start, j - 1);
	quickSort(arr, j + 1, end);
}