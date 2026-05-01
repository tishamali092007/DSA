#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,pos,value;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    cout << "Enter Position :";
    cin >> pos;

    if(pos >= size || pos < 0){
        cout << "Invalid Position..!";
    }
    else{
        cout << "Enter New Value : ";
        cin >> value;
        arr[pos] = value;
    }

    cout << "After Updating Array Element are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;

}