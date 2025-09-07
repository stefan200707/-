#include <iostream>

using namespace std;

void BubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << endl << sum << endl;
    int min_el = 1000000000;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min_el) {
            min_el = arr[i];
        }
    }
    cout << min_el << endl;
    BubbleSort(arr,size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
