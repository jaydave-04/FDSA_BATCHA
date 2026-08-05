#include <iostream>
using namespace std;

int BinaryLoop(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        else if (arr[mid] < target) {
            low = mid + 1;
        }


        else {
            high = mid - 1;
        }
    }

    return -1;
}

int BinaryRecursive(int arr[], int low, int high, int target) {

    if (low > high) {
        return -1;
    }

    int mid = (low + high) / 2;

    if (arr[mid] == target) {
        return mid;
    }

    else if (arr[mid] < target) {
        return BinaryRecursive(arr, mid + 1, high, target);
    }

    else {
        return BinaryRecursive(arr, low, mid - 1, target);
    }
}

int main() {

    int n, target;

    cout << "Enter number of books: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted book codes: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target book code: ";
    cin >> target;

    int result1 = BinaryLoop(arr, n, target);

    int result2 = BinaryRecursive(arr, 0, n - 1, target);

    if (result1 != -1) {
        cout << "Using Loop: Book found at position " << result1 + 1 << endl;
    }
    else {
        cout << "Using Loop: Book not found" << endl;
    }

    if (result2 != -1) {
        cout << "Using Recursion: Book found at position " << result2 + 1 << endl;
    }
    else {
        cout << "Using Recursion: Book not found" << endl;
    }

    return 0;
}
