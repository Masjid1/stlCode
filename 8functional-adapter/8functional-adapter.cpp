
#include <algorithm>
#include <functional>
#include <vector>
#include <iostream>
#include <iterator>
#include "compose.h"

using namespace std;

void print(int i)
{
    cout << i << " ";
}

void print2(int i, int j)
{
    cout << i << '-' << j << ' ';
}

class Int
{
public:
    explicit Int(int i) : m_i(i) { }
    void print1() const { cout << '[' << m_i << ']'; }
    void print2(int i) const { cout << '[' << m_i << '-' << i << ']'; }
private:
    int m_i;
};


int main()
{
    ostream_iterator<int> outite(cout, " ");
    int ia[] = {0,1,2,3,4,5};
    vector<int> iv(ia, ia+6);

    cout << "the number not less than 12:\n";
    cout << count_if(iv.begin(), iv.end(), not1(bind2nd(less<int>(), 2)));
    cout << endl;

    cout << "(iv[i]+2)*3 :\n";
    transform(iv.begin(), iv.end(), outite, compose1(
             bind2nd(multiplies<int>(), 3),
             bind2nd(plus<int>(), 2))
    );
    cout << endl;

    cout << "iv[i] :\n";
    for_each(iv.begin(), iv.end(), ptr_fun(print));
    cout << endl;

    cout << "iv[i]-2 :\n";
    for_each(iv.begin(), iv.end(), bind2nd(ptr_fun(print2), 2));
    cout << endl;

    vector<Int> Iv;
    Iv.push_back(Int(3));
    Iv.push_back(Int(7));
    Iv.push_back(Int(20));
    Iv.push_back(Int(14));
    Iv.push_back(Int(68));

    /// _Ret std::const_mem_fun_t<_Ret, _Tp>::operator()(const _Tp*) const [with _Ret = void; _Tp = Int]
    /// print1会隐式传递this指针(即:Int*), iv内的元素必须是Int型的。

    /// 由于for_each每次传给仿函数的是迭代器的解引用(*Ite，即值的引用类型reference)，所以必须要用mem_fun_ref,
    /// 而不能用mem_fun, 它是针对参数为指针的情况。
    cout << "[ iv[i] ] :\n";
    for_each(Iv.begin(), Iv.end(), mem_fun_ref(&Int::print1));
    cout << endl;

//    mem_fun_ref(&Int::print1)(Int(3));cout << endl;
//    mem_fun_ref(&Int::print2)(Int(3), 2);cout << endl;
//    bind2nd(mem_fun_ref(&Int::print2), 2)(Int(3));cout << endl;

   /** These functions are deprecated in C++11 and can be replaced by
   *  @c std::bind (or @c std::tr1::bind) which is more powerful and flexible,
   *  supporting functions with any number of arguments.  Uses of @c bind1st
   *  can be replaced by @c std::bind(f, x, std::placeholders::_1) and
   *  @c bind2nd by @c std::bind(f, std::placeholders::_1, x).
   **/
    bind(mem_fun_ref(&Int::print2), Int(3), placeholders::_1)(2);cout << endl;
    bind(mem_fun_ref(&Int::print2), placeholders::_1, 2)(Int(3));cout << endl;

    /// 会报error: ivilid conversion from 'int' to 'Int*'
    cout << "[ iv[i] ]-2 :\n";
    for_each(Iv.begin(), Iv.end(), bind2nd(mem_fun_ref(&Int::print2), 2));
    cout << endl;


    return 0;
}
