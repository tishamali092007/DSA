#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,j,k;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){

                for(k = j; k < size - 1; k++){
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }

    cout << "Array elements After Remove Duplicate : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}