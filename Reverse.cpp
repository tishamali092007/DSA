#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,temp;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array elements : ";
        cin >> arr[i];
    }

    cout << "Array Elements Are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(i = 0; i < size/2; i++){
       temp = arr[i];
       arr[i] = arr[size - i - 1];
       arr[size - i - 1] = temp;
    }

    cout << "After Reverse Array elements Are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}