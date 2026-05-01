#include<iostream>
using namespace std;

int main() {

    int arr[100],i,j,size,pos,temp;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array elements : ";
        cin >> arr[i];
    }

cout << "Enter Pos For Rotate Elements : ";
cin >> pos;

for(i=0; i < pos; i++){
        temp = arr[0];
        for(j=0; j < size - 1; j++){
            arr[j] = arr[ j + 1];
        }
        arr[size - 1] = temp;
    }

cout << "Array After Rotation : ";
for(i=0; i < size; i++){
    cout << arr[i] << " ";
}

return 0;
}