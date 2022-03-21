#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[5];
    int key;

    cout << "Enter 5 elements: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    sort (arr, arr + 5);

    cout << endl << "Enter key number: ";

    cin >> key;

    bool flag = false;
    int l = 0;
    int r = 4;
    int mid;

    while ((l <= r) && (flag != true)) {
        mid = (l + r) / 2;

        if (arr[mid] == key) flag = true;
        if (arr[mid] > key) r = mid - 1;
        else l = mid + 1;
    }

    if (flag) cout << "Index " << key << " = " << mid;
    else cout << "-1";

}