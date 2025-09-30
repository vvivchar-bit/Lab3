#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: array size must be positive." << endl;
        return 1;
    }

    vector<double> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double minVal = arr[0];
    int minIndex = 1; // 1-based index

    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i + 1; // +1 because index starts from 0
        }
    }

    cout << "Minimum value = " << minVal << endl;
    cout << "Position (1-based) = " << minIndex << endl;

    return 0;
}
