#include <iostream>
#include <vector>

#include "my_algo.h"

using namespace std;

//1,2,3, 4,  5,  6,   7,    8,     9,     10
//1,2,6,24,120,720,5040,40320,362880,3628800
int main()
{
    vector<int> iv, iv2;
    for(int i=5; i>0; --i){
        iv.push_back(i);
    }
    iv2.resize(iv.size());
    copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    while(prev_permutation(iv.begin(), iv.end())){
        for(int k=1; k<iv.size(); ++k){
            copy(iv.begin(), iv.end(), iv2.begin());
            my_nth_element(iv2.begin(), iv2.begin()+3, iv2.end());

            if(!check(iv2.begin(), iv2.end(), iv.at(k))){
                cout << "before my_nth_element " << k << ":\n";
                copy(iv.begin(), iv.end(), ostream_iterator<int>(cout, " "));
                cout << endl;

                cout << "after my_nth_element " << k << ":\n";
                copy(iv2.begin(), iv2.end(), ostream_iterator<int>(cout, " "));
                cout << endl;

                cout << "k: " << k << "\tvalue: " << iv.at(k) << "\tfalse.\n";
                return 1;
            }
        }
    }
    cout << "ture.\n";

    return 0;
}


