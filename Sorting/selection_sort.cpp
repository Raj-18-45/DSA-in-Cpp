#include <iostream>
using namespace std;

void selectionsort(int arr[], int n){
    // We run the outer loop till n-1 because after placing n-1 elements, the last element automatically gets sorted
    for(int i = 0; i < n - 1; i++){
        int min = i;
        // In the inner loop, we start from i+1 because the first i elements are already sorted, so we only search in the remaining unsorted portion.

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        // swap after finding minimum
        swap(arr[min], arr[i]);
    }
}

int main(){ 
    int arr[] = {35,50,15,25,80,20,90,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionsort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
