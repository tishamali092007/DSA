#include<iostream>
using namespace std;

int main() {

    int arr[100],size,i,closest,diff,mindiff,target;

    cout << "Enter The Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
        cout << "Enter Array Element : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter target Number :";
    cin >> target;

    closest = arr[0];
    mindiff = arr[0] - target;
    if(mindiff < 0) mindiff = -mindiff;

    for(i = 1; i < size; i++){
        diff = arr[i] - target;
        if(diff < 0) diff = -diff;

        if(diff < mindiff){
            mindiff = diff;
            closest = arr[i];
        }
    }

    cout << "\nClosest number : " << closest << endl;

    return 0;
}