#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,num;

    cout << "Enter Number : ";
    cin >> num;

    cout << "Enter Size : ";
    cin >> size;

    for(i=0; i < size; i++){
        arr[i] = num * (i + 1);
    }

    cout << "\nMultiplication table of " << num << endl;

    for(i=0; i < size; i++){
        cout << num << " x " << (i + 1) << " = " << arr[i] << endl;
    }

    return 0;
    
}