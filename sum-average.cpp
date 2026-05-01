#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,sum=0,average=0;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array elements : ";
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        sum = sum + arr[i];
    }

    average = sum / size;

    cout << "Sum of Element : " << sum << endl;
    cout << "Average of Element : " << average;

    return 0;
}
