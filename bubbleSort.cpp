#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        
        for (int j = 0; j < n - i - 1; j++) {
           
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}


int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);

    cout << "Sorted array: ";
    printArray(arr, N);

    return 0;
}
