#include <iostream>
using namespace std;

struct Node
{
    int patient;
    Node *next;
};

int main()
{
    Node *front = NULL;
    Node *rear = NULL;

    int choice, patient;

    while (1)
    {
        cout << "1. Arrive"<<endl;
        cout << "2. Attend"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        if (choice == 1)
        {
            cout <<"Enter patient number:";
            cin>>patient;

            Node *newNode = new Node;
            newNode->patient = patient;
            newNode->next = NULL;

            if (rear == NULL)
            {
                front = rear = newNode;
            }
            else
            {
                rear->next = newNode;
                rear = newNode;
            }

            cout << "Front patient: "<<front->patient<<endl;
        }
        else if (choice == 2)
        {
            if (front == NULL)
            {
                cout <<"Error: Queue is empty"<<endl;
            }
            else
            {
                cout <<"Attended patient: "<<front->patient<<endl;

                Node *temp = front;
                front = front->next;
                delete temp;

                if (front==NULL)
                    rear=NULL;
                else
                    cout << "Front patient: " << front->patient << endl;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
