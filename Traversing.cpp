#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0;i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    cout << "Array Element are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}