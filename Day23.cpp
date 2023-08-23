//Given an integer k and a queue of integers. The task is to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order
#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    //Switch numbers
    int start = 0;
    int end = k-1;
    int temp;

    while(start<end){

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;

    }

    //Display
    for(int i = 0; i<len; i++){

        cout<<arr[i]<<" ";

    }

    return 0;
}
