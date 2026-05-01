#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,count = 0;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array elements : ";
        cin >> arr[i];
    }

    for(i = 0; i < size/2; i++){
        if(arr[i] != arr[size - i - 1]){
            count++;
        }
    }

    if( count == 0){
        cout << "Array Is Palindrome";
    }
    else{
        cout << "Array Is Not Palindrome";
    }

return 0;
}