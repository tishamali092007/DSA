#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,pos;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    cout << "Enter The Position : ";
    cin >> pos;

    for(i = pos; i < size - 1; i++){
    arr[i] = arr[i + 1];
    }

    size--;

    for(i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}