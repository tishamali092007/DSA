#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,j,count;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    for(i=0; i < size; i++){

        count = 0;

        for(j=0; j < i; j++){
            if(arr[i] == arr[j]){
                break;
            }
        }

        if(i == j){
            for(j=0; j < size; j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
        cout << arr[i] << " occurs " << count  << " times " << endl;  
        }
    }
    return 0;
}
