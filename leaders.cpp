#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,j;

    cout << "Enter The Size Of array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array elements Are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Leaders in Array Are : ";
    
    for(i=0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] < arr[j]) {
                break;
            }
        }
        if(j == size){
            cout << arr[i] << " ";
        }
    }
    return 0;
}