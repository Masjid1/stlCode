
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int arr[6] = {1,2,3,3,4,5};
//    cout << *lower_bound(arr, arr + sizeof(arr)/sizeof(int), 3) << endl;
//    cout << *upper_bound(arr, arr + sizeof(arr)/sizeof(int), 3) << endl;

    copy(arr, arr+6, ostream_iterator<int>(cout, " "));
    cout << endl;

    random_shuffle(arr, arr+6);
    copy(arr, arr+6, ostream_iterator<int>(cout, " "));
    cout << endl;

    random_shuffle(arr, arr+6);
    copy(arr, arr+6, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
