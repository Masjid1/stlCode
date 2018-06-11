#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[6] = {1,2,3,3,4,5};
    cout << *lower_bound(arr, arr + sizeof(arr)/sizeof(int), 3);
    cout << *upper_bound(arr, arr + sizeof(arr)/sizeof(int), 3);
    ///__upper_bound
    return 0;
}
