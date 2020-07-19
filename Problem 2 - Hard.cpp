#include <iostream>

using namespace std;

void print(int arr[], int arrSize) {

    --arrSize;

    cout << '[';

    for (int index = 0; index < arrSize; ++index)
        cout << arr[index] << ", ";

    cout << arr[arrSize] << ']'; 
}   

int main() {

    unsigned long long product = 1;

    int arrSize;

    cin >> arrSize;

    int arr[arrSize], index;

    for (index = 0; index < arrSize; ++index) {
        cin >> arr[index];
        product *= arr[index];
    } 

    for (index = 0; index < arrSize; ++index)
        arr[index] = product / arr[index];
    
    print(arr, arrSize);

    return 0;
}