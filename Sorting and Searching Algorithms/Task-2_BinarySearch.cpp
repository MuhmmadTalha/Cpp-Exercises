#include <iostream>
using namespace std;


int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid; 

        if (arr[mid] < key)
            start = mid + 1; 
        else
            end = mid - 1; 
    }
    return -1;
}

int main() {
    int RollNo[] = { 2, 4, 7, 10, 15, 20, 25 };
    int size = sizeof(RollNo) / sizeof(RollNo[0]);
    int key;

    cout << "Enter the number to search: ";
    cin >> key;

    int result = binarySearch(RollNo, size, key);

    if (result != -1)
        cout << "Roll Number found at index " << result << endl;
    else
        cout << "Roll Number not found" << endl;

    return 0;
}
