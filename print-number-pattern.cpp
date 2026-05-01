#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,j;

    cout << "Enter size  : ";
    cin >> size;

    for(i=0; i < size; i++){
        arr[i] = i + 1;
    }
    cout << endl;

    for(i = 0; i < size; i++){
        for(j=0; j <= i; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
    
}