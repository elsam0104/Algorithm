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
	//원소가 1개일 경우
	if (start >= end) return;

	int pivot = start;
	int i = start + 1;	//큰 값 찾는 애
	int j = end;		//작은 값 찾는 애
	int temp;
	//큰 값과e 작은 값을 찾았다면

	//엇갈렸다면 .. 엇갈릴 때 까지
	while (i <= j)
	{
		//i가 찾을 때 까지
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[j] >= arr[pivot])
			j--;
		//엇갈림
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