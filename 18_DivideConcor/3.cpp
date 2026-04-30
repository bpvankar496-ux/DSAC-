    //normal case//
// {6, 3, 7, 5, 2, 4}
//       ↓
// pivot = 4
// {3,2} [4] {6,7,5}
// Left અને Right બંને side roughly equal
// → O(N logN) 


    //worst case//
// {1, 2, 3, 4, 5}
// pivot = 5 (છેલ્લો)

// [] [5] {1,2,3,4}  ← Left side ખાલી!
//         pivot=4
//    [] [4] {1,2,3} ← ફરી Left ખાલી!
//            pivot=3
//       [] [3] {1,2}


       //logic//
//       Round 1 → n   elements જોયા
// Round 2 → n-1 elements જોયા
// Round 3 → n-2 elements જોયા
// ...
// Round n → 1   element જોયો
// Total = n+(n-1)+(n-2)+...+1
//       = n(n+1)/2
//       = O(N²) 


      //random pivit lidho last ni jagyye
#include <iostream>
#include <cstdlib>
using namespace std;

int partition(int arr[], int si, int ei) {
    // Random pivot fix
    int randIdx = si + rand() % (ei - si + 1);
    swap(arr[randIdx], arr[ei]);

    int pivot = arr[ei];
    int i = si - 1;

    for(int j = si; j < ei; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[ei]);
    return i+1;
}

void quickSort(int arr[], int si, int ei) {
    if(si >= ei) return;
    int pivotIdx = partition(arr, si, ei);
    quickSort(arr, si, pivotIdx-1);
    quickSort(arr, pivotIdx+1, ei);
}

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    // Sorted array - normally O(N²) but fixed with random pivot
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Before: ";
    printArr(arr, n);

    quickSort(arr, 0, n-1);

    cout << "After:  ";
    printArr(arr, n);

    return 0;
}