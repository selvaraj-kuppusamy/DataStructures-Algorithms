/*
Algorithm:Selection Sort
Time:O(n²)
Space:O(1)
Author:Selvaraj Kuppusamy, github/selvaraj-kuppusamy
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
void display(int *array,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
void SelectionSort(int *array,int size)
{
	int i,j,imin;
	for(i=0;i<size-1;i++)
	{
		imin=i;
		for(j=i+1;j<size;j++)
			if(array[j]<array[imin])
			{
			imin=j;
			}
			swap(array[i],array[imin]);
	}

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
	SelectionSort(arr,n);
	display(arr,n);
}
