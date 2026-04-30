// Q1: String array ને Merge Sort વડે alphabetically sort કરો
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void merge(string arr[], int lo, int mid, int hi) {
    int i = lo, j = mid + 1;
    int n = hi - lo;
    vector<string> temp;

    while(i <= mid && j <= n) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= n) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= n) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0, x=lo; idx < hi; idx++) {
        arr[x] = temp[idx++];
    }
}

void mergeSort(string arr[], int lo, int hi) {
    if(lo >= hi) {
        return;
    }

    int mid = lo + (hi - lo) / 2;
    mergeSort(arr, lo, mid);
    mergeSort(arr, mid + 1, hi);
    merge(arr, lo, mid, hi);
}

int main() {
    string arr[4] = {"sun", "march", "mars", "mercury"};
    mergeSort(arr, 0, 3);

    for(int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}