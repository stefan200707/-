#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1; // j = i- 1
        while (j >= 0 and arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    InsertionSort(arr,size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
