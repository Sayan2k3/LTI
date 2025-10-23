#include <iostream>
#include <algorithm>
using namespace std;

double mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}

double med(int arr[], int n) {
    sort(arr, arr + n);

    if (n % 2 != 0) {
        // Odd number of elements
        return arr[n / 2];
    } else {
        // Even number of elements
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Mean = " << mean(arr, n) << endl;
    cout << "Median = " << med(arr, n) << endl;

    return 0;
}
