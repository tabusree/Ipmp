#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int count = 0; 
    int element; 

    //applying Moore's voting algorithm:
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            count = 1;
            element = v[i];
        }
        else if (element == v[i]) count++;
        else count--;
    }

    //checking if the stored element
    // is the majority element:
    int count1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == element) count1++;
    }

    if (count1 > (n / 2)) return element;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
