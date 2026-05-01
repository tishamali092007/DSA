#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,pos,Element,choice;

    cout << "Enter Size Of Array : ";
    cin >> size;

    for(i=0; i < size; i++){
         cout << "Enter Array Elements : ";
        cin >> arr[i];
    }

    do{
        cout << "\n======Menu======";
        cout << "\n1. Accessing Array ";
        cout << "\n2. Inserting Array ";
        cout << "\n3. Deleting Array ";
        cout << "\n4. Updating Array ";
        cout << "\n0. Exiting";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice){


            case 1:

                for(i=0; i < size; i++){
                    cout << arr[i] << " ";
                }
                cout << "\nAccessing Array";
                break;

            case 2:
            
                cout << "Enter Position : ";
                cin >> pos;

                if(pos > size || pos < 0){
                    cout << "Invalid Position..!";
                    break;
                }

                cout << "Enter Element : ";
                cin >> Element;

                for(i = size; i > pos; i--){
                    arr[i] = arr[i - 1];
                }
                arr[pos] = Element;
                size++;

                cout << "Element Inserted Successfully..!";
                break;

            case 3:
            
                cout << "Enter Position : ";
                cin >> pos;

                if(pos > size || pos < 0){
                    cout << "Invalid Position..!";
                    break;
                }

                for(i = pos; i < size - 1;i++){
                    arr[i] = arr[i + 1];
                }
                size--;
                cout << "Element Deleted Successfully..!";
                break;

            case 4:
            
                cout << "Enter Position : ";
                cin >> pos;

                if(pos >= 0 && pos < size){
                    cout << "Enter New Element : ";
                    cin >> Element;
                    arr[pos] = Element;
                }
                else{
                    cout << "Invalid Position..!";
                    break;
                }
            
                cout << "Element Updated Successfully..!";
                break;

            case 0:
            
                cout << "Exiting..!";
                break;

            default :
            
                cout << "Invalid Choice...!";
                break;
        }
    }while(choice != 0);

    return 0;
}