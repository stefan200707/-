#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > key) { //j >= 0 - у нас всё ещё есть элемент arr[j] > key - сравниваем все элементы до текущего 
            arr[j + 1] = arr[j]; // если условия выполнились 
            j--;
        } // в этом цикле происходит обмен наибольшего элемента и key
        arr[j + 1] = key; // всё завязано на key
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
