#include <iostream>
using namespace std;

void printarr(int arr [], int n)
{    
    for(int i=0; i<n; i++)
    {   
        cout <<arr[i] << " ";
    }
    cout << "\n";

}

void bubble_sort(int arr[], int n ){
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
        printarr(arr, n);
        
    }
}



int main(){
    cout << "cpp in local pc";
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    return 0;
}