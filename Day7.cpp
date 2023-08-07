//Rotate the array left N times. Accept N value from the user.
#include <iostream>
using namespace std;

int main(){

    cout<<"Enter size of array=";
    int size;
    cin>>size;

    cout<<"\nEnter elements=";
    int arr[size];
    for(int i = 0; i<size; i++){

        cin>>arr[i];

    }

    cout<<"\nEnter no. of rotations=";
    int N;
    cin>>N;

    for(int n = 0; n <N; n++){

        int temp = arr[0];
        for(int j = 0; j <size-1; j++){

            arr[j] = arr[j+1];

        }
        arr[size-1] = temp;

    }

    //Display
    cout<<"\nOutput=";
    for(int i = 0; i<size; i++){

        cout<<arr[i]<<" ";

    }

    return 0;
}
