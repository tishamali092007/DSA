#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,even=0,odd=0;

    cout << "Enter the Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] %2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even Values : " << even << endl;
    cout << "Odd Values : " << odd;

    return 0;
}