#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        // Fix: Correct the assignment in the next line
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            return mid;
        }

        // Left sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && arr[mid] >= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // Right sorted
        else if (arr[mid] <= k && arr[high] >= k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 9;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present \n";
    else
        cout << "The index is : " << ans << "\n";
    return 0;
}
