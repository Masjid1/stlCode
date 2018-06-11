#include <iostream>
#include <deque>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec = {2,3,6,8,10,12,14,16,18,20};
    vector<int>::reverse_iterator rite(ivec.end());
    cout << *rite << endl;          //20
    cout << *++++++rite << endl;    //14
    cout << *(rite) << endl;        //14
    cout << *(rite.base()) << endl; //16
    // 反向迭代器下标操作不是质变操作，不影响反向迭代器的状态。
    cout << rite[3] << " " << endl; //8 14(当前解引的值)后退3个
    cout << rite[0] << endl;        //14 14(当前解引的值)
    cout << rite[-2] << endl;       //18 14(当前解引的值)前进2个
    cout << rite[-1] << endl;       //16 14(当前解引的值)前进1个

    cout << rite[-3] << endl;       //20 14(当前解引的值)可前进3个,或后退6个，即[-3,6]。
    cout << rite[6] << endl;        //2 14(当前解引的值)可前进3个,或后退6个，即[-3,6]。
//    cout << rite[7] << endl;        //越界，一个无意义的数。

    istream_iterator<int> inite(cin), eos;
    copy(inite, eos, ivec.begin());//以一个非数字，非空白符的字符作为输入流的结束标志。

    ostream_iterator<int> outite(cout, " ");
    copy(ivec.begin(), ivec.end(), outite);
    cout << endl;

    return 0;
}
