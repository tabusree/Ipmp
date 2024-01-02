#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int i, int j) {
    int pivot = arr[i];
    while (i<j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            swap(arr[i], arr[j]);
            return j;
        }
    }
}

void quickSort(int arr[], int i, int j) {
    if (i < j) {
        int loc = partition(arr, i, j);
        quickSort(arr, i, loc - 1);
        quickSort(arr, loc + 1, j);
    }
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
