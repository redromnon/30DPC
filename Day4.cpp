//An array contains both postive and negative numbers in random order.
//Rearrange the array elements so that all negative numbers appear before all postive numbers

#include <iostream>
using namespace std;

int main(){

    cout<<"Enter array size = ";
    int size;
    cin>>size;

    int arr[size];
    cout<<"\nEnter any +ve and -ve integers";
    for(int i = 0; i<size; i++){

        cout<<"\nElement "<<i+1<<" = ";
        cin>>arr[i];

    }

    //Rearrangr -ve numbers to left
    for(int i = 0; i < size-1; i++){

        for(int j = i+1; j < size; j++){

            if(arr[i] > arr[j] && arr[j] < 0){

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

                break;

            }

        }

    }

    //Output
    cout<<"\n\nArray:";
    for(int i = 0; i<size; i++){

        cout<<arr[i]<<" ";

    }

    return 0;
}
