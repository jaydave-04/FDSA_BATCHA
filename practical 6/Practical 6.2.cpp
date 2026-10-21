#include <iostream>
using namespace std;

int main()
{
    int stack[1000];
    int top = -1;
    int choice, page;

    while (1)
    {
        cout << "1. Visit Page" <<endl;
        cout << "2. Back" <<endl;
        cout << "3. Exit" <<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter page number: ";
            cin >> page;
            top++;
            stack[top] = page;
            cout << "Current page: " << stack[top] << endl;
        }
        else if (choice == 2)
        {
            if (top <= 0)
            {
                cout << "Error: No history left" << endl;
                cout << "Current page: " << stack[top] << endl;
            }
            else
            {
                top--;
                cout <<"Current page: "<< stack[top] << endl;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout <<"Invalid choice" << endl;
        }
    }
    return 0;
}
