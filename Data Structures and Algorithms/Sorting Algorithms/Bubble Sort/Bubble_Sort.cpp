/*
Algorithm: Bubble Sort
Time: O(n²)
Space: O(1)
Author: selvaraj Kuppusamy, github.com/selvaraj-kuppusamy
 */
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void BubbleSort(int *array,int size)
{
	for(int i=0;i<size-1;i++)		
	for(int j=0;j<size-i-1;j++)
		if(array[j]>array[j+1])
		swap(array[j],array[j+1]);
}

void display(int *array,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	BubbleSort(arr,n);
	display(arr,n);
}
