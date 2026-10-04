#include <iostream>
using namespace std;

int main() {
    int queue[100];
    int n = 0;
    int operations;

    cout << "Enter number of operations: ";
    cin >> operations;

    for (int i = 0; i < operations; i++) {
        int choice, value, position;

        cout << "\n1. Critical Patient";
        cout << "\n2. Routine Patient";
        cout << "\n3. Insert at Position";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter token: ";
            cin >> value;

            for (int j = n; j > 0; j--)
                queue[j] = queue[j - 1];

            queue[0] = value;
            n++;
        }

        else if (choice == 2) {
            cout << "Enter token: ";
            cin >> value;

            queue[n] = value;
            n++;
        }

        else if (choice == 3) {
            cout << "Enter position: ";
            cin >> position;

            cout << "Enter token: ";
            cin >> value;

            if (position > n)
                position = n;

            for (int j = n; j > position; j--)
                queue[j] = queue[j - 1];

            queue[position] = value;
            n++;
        }

        cout << "Queue: ";

        for (int j = 0; j < n; j++)
            cout << queue[j] << " ";

        cout << endl;
    }

    return 0;
}
