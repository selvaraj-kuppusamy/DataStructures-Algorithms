#include <iostream>
using namespace std;
void display(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
}

void QuickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        QuickSort(array, low, j);
    if (i < high)
        QuickSort(array, i, high);
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
     QuickSort(arr, 0, n-1);

    display(arr, n);
    return (0);
}
