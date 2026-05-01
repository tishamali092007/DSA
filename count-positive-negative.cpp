#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,positive=0,negative=0;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] >= 0){
            positive++;
        }
        else{
            negative++;
        }
    }

    cout << "Positive Value : " << positive << endl;
    cout << "Negative Value : " << negative;

    return 0;
}