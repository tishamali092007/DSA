#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,found=0,Element;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Element : ";
        cin >> arr[i] ;
    }

    cout << "Array Elements Are : ";
    for(i=0; i < size; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter Array Element For Searching : ";
    cin >> Element;

    for(i=0; i < size; i++){
        if(arr[i] == Element){
            cout << " Array Element Found at Position " << i  << endl;
            found = 1;
            break;
        }
    }

    if(found == 0){
        cout << " array Element Not Found At Position...!";
    }

    return 0;
}