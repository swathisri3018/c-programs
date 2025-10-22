#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    char order;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; 

    cout << "Enter " << n << " numbers:\n";
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Sort in ascending (A) or descending (D) order? ";
    cin >> order;
    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            if ((order == 'A' || order == 'a') && arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else if ((order == 'D' || order == 'd') && arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted numbers:\n";
    for (i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
