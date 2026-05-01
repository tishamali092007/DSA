#include<iostream>
using namespace std;

int main(){

    int arr[100],i,size,min,max;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }
    cout << endl;

    min = arr[0];
    max = arr[0];

    for(i=1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Min value : " << min << endl;
    cout << "Max Value : " << max;

    return 0;
    
}