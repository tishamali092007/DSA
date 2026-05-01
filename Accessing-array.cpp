#include<iostream>
using namespace std;

int main(){

    int size,i;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    int arr[size];

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    cout << "\nUsing Index : ";
    for(i=0; i < size; i++){
    cout << arr[i] << " ";
    }

    cout << "\nUsing Pointer : ";
    for(i=0; i < size; i++){
        cout << *(arr + i) << " ";
    }

    cout << "\nUsing rangeloop : ";
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}