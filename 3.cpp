#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n) {
    for (int i = 0; i < n; i++) {
        int minind = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[minind]) {
                minind = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minind];
        arr[minind] = temp;
    }
}
int main()
{
    int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    SelectionSort(arr,size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}