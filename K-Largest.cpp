#Find Kth largest element in a given array

#include <iostream>
using namespace std;

void sort(int arr[], int size){

    //Selection
    for(int i =0; i<size; i++){

        for(int j = i; j<size; j++){

            if(arr[j] > arr[i]){

                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }

        }

    }

    /*for(int i = 0; i<size; i++){

        cout<<arr[i]<<" ";

    }*/

}

void Klargest(int arr[], int k){

    cout<<"The "<<k<<"nd largest number is "<<arr[k-1];
    

}


int main(){

    cout<<"Enter size of array = ";
    int size;
    cin>>size;

    cout<<"Enter elements in array \n";
    int arr[size];
    for(int i = 0; i<size; i++){

        cout<<"\nElement "<<i+1<<"=";
        cin>>arr[i];
    }

    sort(arr, size);

    cout<<"\nEnter Kth largest element: ";
    int k;
    cin>>k;

    Klargest(arr, k);

    return 0;
}
