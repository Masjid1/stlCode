// file: 1config3.cpp
// 测试在类模板中拥有静态数据成员
// test __STL_STATIC_TEMPLATE_MEMBER_BUG, defined in <stl_config.h>
// ref. C++ Primer 3/e, p.839

#include <iostream>
using namespace std;

template <typename T>
class testClass {
public:
    static int _data;
};

// error: specializing member 'testClass<int>::_data' requires 'template<>' syntax
template<> int testClass<int>::_data = 1;
template<> int testClass<char>::_data = 2;

int main()
{
    cout << testClass<int>::_data << endl;  // GCC, VC6:1, CB4:0
    cout << testClass<char>::_data << endl;  // GCC, VC6:2, CB4:0

    testClass<int> obji1, obji2;
    testClass<char> objc1, objc2;

    cout << obji1._data << endl; // GCC, VC6:1, CB4:0
    cout << obji2._data << endl; // GCC, VC6:1, CB4:0
    cout << objc1._data << endl; // GCC, VC6:2, CB4:0
    cout << objc2._data << endl; // GCC, VC6:2, CB4:0

    obji1._data = 3;
    objc2._data = 4;

    cout << obji1._data << endl; // GCC, VC6:3, CB4:3
    cout << obji2._data << endl; // GCC, VC6:3, CB4:3
    cout << objc1._data << endl; // GCC, VC6:4, CB4:4
    cout << objc2._data << endl; // GCC, VC6:4, CB4:4
    return 0;
}
