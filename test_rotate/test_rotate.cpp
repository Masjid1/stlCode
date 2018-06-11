#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> iv = {1,2,3,4,5,6};
    for(auto i:iv){
        cout << i << ' ';
    }
    cout << endl;

    rotate(iv.begin(), iv.begin()+3, iv.end());
    for(auto i:iv){
        cout << i << ' ';
    }
    cout << endl;

    std::cout << "hello.";
    return 0;
}
