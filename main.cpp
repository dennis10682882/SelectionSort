//c++ program to implement Selection Sort Algorithm
#include <iostream>

using namespace std;

void swap(int *d, int *p)
{
    int temp = *d;
    *d = *p;
    *p = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, minNumber;


    for (i = 0; i < n-1; i++)
    {

        minNumber = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[minNumber])
            minNumber = j;


        swap(&arr[minNumber], &arr[i]);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = {100, 20, 50, 70, 10, 30, 80, 40, 90, 60};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "SORTED ARRAY: \n";
    printArray(arr, n);
    return 0;
}
