#include <algorithm>
#include <iterator>
#include <vector>
#include "my_iterator.h"

using namespace std;

const int& __median(const int& a, const int& b, const int& c)
{
    if(a<b)
        if(b<c)//a<b,b<c => b
            return b;
        else if(a<c)//a<b,b>=c,a<c => c
            return c;
        else//a<b,b>=c,a>=c => a
            return a;
    else if(a<c)//a>=b,a<c => a;
        return a;
    else if(b<c)//a>=b,a>=c,b<c => c
        return c;
    else//a>=b,a>=c,b>=c => b;
        return b;
}

vector<int>::iterator __unguarded_partition(vector<int>::iterator first,
                                           vector<int>::iterator last,
                                           int pivot) {
  while (true) {
    while (*first < pivot) ++first;
    --last;
    while (pivot < *last) --last;
    if (!(first < last)) return first;
    iter_swap(first, last);
    ++first;
  }
}


void __unguarded_linear_insert(vector<int>::iterator last, int value) {
  vector<int>::iterator next = last;
  --next;
  while (value < *next) {
    *last = *next;
    last = next;
    --next;
  }
  *last = value;
}


inline void __linear_insert(vector<int>::iterator first,
                            vector<int>::iterator last) {
  int value = *last;
  if (value < *first) {
    copy_backward(first, last, last + 1);
    *first = value;
  }
  else
    __unguarded_linear_insert(last, value);
}


void __insertion_sort(vector<int>::iterator first, vector<int>::iterator last) {
  if (first == last) return;
  for (vector<int>::iterator i = first + 1; i != last; ++i)
    __linear_insert(first, i);
}


void my_nth_element(vector<int>::iterator first, vector<int>::iterator nth, vector<int>::iterator last)
{
    while(last-first>3){
        vector<int>::iterator cut = __unguarded_partition(first, last, __median(*first,
                                                                *(first+(last-first)/2),
                                                                *(last-1)));
        if(cut<=nth)
            first = cut;
        else
            last = cut;
    }
    __insertion_sort(first, last);
}

/// �������[first, last)�ǲ���[first, valueIte),[valueIte, last)��ɣ�
/// ����[first, valueIte)�е�Ԫ��һ��С��value, [valueIte, last)�е�Ԫ��һ����С��value��

bool check(vector<int>::iterator first, vector<int>::iterator last, int value)
{
    vector<int>::iterator i = first;
    while(*i < value){///��Ϊһ������*i==value, ����ѭ��һ�������������ʡȥ�Ա߽�������ж�(i!=last)��
        ++i;
    }
    if(*i++ != value){
        return false;
    }
    while(i != last && !(*i < value)){
        ++i;
    }
    return (i==last);///value֮�������Ԫ�ض���С��value���򷵻�true��
}


bool checkSort(vector<int>::iterator first, vector<int>::iterator last)
{
    ++first;
    while( !(*first < *(first-1)) && first != last){
        first++;
    }
    if(first == last)
        return true;
    else
        return false;
}
