#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter Number of Vehical :";
    cin>>n;

    string arr[n];
    string RequiredNumberPlate;

    for(int i = 0; i < n; i++){

        cout<<"Enter Number plate of " << i+1 << "  Vehical ";
        cin>>arr[i];
    }

        cout<<"Enter Required Number Plate: ";
        cin>>RequiredNumberPlate;

    for (int i = 0; i < n; i++ ){


        if(arr[i] == RequiredNumberPlate){
            cout << i+1 th << " Number plate Found !!!";

            break;
        }


    }



}

