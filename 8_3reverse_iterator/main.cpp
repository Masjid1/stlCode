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
    // ����������±���������ʱ��������Ӱ�췴���������״̬��
    cout << rite[3] << " " << endl; //8 14(��ǰ������ֵ)����3��
    cout << rite[0] << endl;        //14 14(��ǰ������ֵ)
    cout << rite[-2] << endl;       //18 14(��ǰ������ֵ)ǰ��2��
    cout << rite[-1] << endl;       //16 14(��ǰ������ֵ)ǰ��1��

    cout << rite[-3] << endl;       //20 14(��ǰ������ֵ)��ǰ��3��,�����6������[-3,6]��
    cout << rite[6] << endl;        //2 14(��ǰ������ֵ)��ǰ��3��,�����6������[-3,6]��
//    cout << rite[7] << endl;        //Խ�磬һ�������������

    istream_iterator<int> inite(cin), eos;
    copy(inite, eos, ivec.begin());//��һ�������֣��ǿհ׷����ַ���Ϊ�������Ľ�����־��

    ostream_iterator<int> outite(cout, " ");
    copy(ivec.begin(), ivec.end(), outite);
    cout << endl;

    return 0;
}
