#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter capacity: ";
    cin >> n;

    int stack[100];
    int top = -1;

    int choice, tray;

    while (1)
    {
        cout << "1. Place Tray"<<endl;
        cout << "2. Take Tray"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        if (choice == 1)
        {
            if (top == n - 1)
            {
                cout <<"Error: Stack is full"<< endl;
            }
            else
            {
                cout << "Enter tray number: ";
                cin >> tray;

                top++;
                stack[top] = tray;

                cout << "Top tray: " << stack[top] << endl;
            }
        }
        else if (choice == 2)
        {
            if (top == -1)
            {
                cout <<"Error: Stack is empty"<< endl;
            }
            else
            {
                cout <<"Taken tray: "<<stack[top]<<endl;

                top--;

                if (top == -1)
                    cout <<"Stack is empty"<<endl;
                else
                    cout <<"Top tray: "<<stack[top]<<endl;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout <<"Invalid choice"<< endl;
        }
    }

    return 0;
}
