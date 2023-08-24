//Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {9, -1, -5, 3, 2};
    int k = 3;

    int len = sizeof(arr)/sizeof(arr[0]);

    int end;

    //Find -ve number in each window
    for(int i = 0; i <= len-k; i++){

        end = i + k;

        for(int j = i; j < end; j++){

            if(arr[j] < 0){

                cout<<arr[j]<<" ";
                break;
            }

            if(j == end - 1){

                cout<<0<<" ";

            }

        }

    }

    return 0;
}
