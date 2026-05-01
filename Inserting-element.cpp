#include<iostream>
using namespace std;

int main(){
    
    int arr[100],size,i,pos,Element;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array elements : ";
        cin >> arr[i];
    }

    cout << "Enter Position : ";
    cin >> pos;

    cout << "Enter Array Element : ";
    cin >> Element;

    for(i = size; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = Element;
    size++;

    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}