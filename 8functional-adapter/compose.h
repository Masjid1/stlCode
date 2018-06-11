#include <functional>

using namespace std;

// ʹh(x) = f(g(x))
template <class Operation1, class Operation2>
class unary_compose
    : public unary_function<typename Operation2::argument_type,
                            typename Operation1::result_type> {
protected:
    Operation1 op1;
    Operation2 op2;
public:
    // constructor
    unary_compose(const Operation1& _op1, const Operation2& _op2)
        : op1(_op1), op2(_op2) { }

    // call operator
    typename Operation1::result_type
    operator()(const typename Operation2::argument_type& x) const {
        return op1(op2(x));
    }
};

// ��������������unary_compose�º�����ʵ��
template <class Operation1, class Operation2>
inline unary_compose<Operation1, Operation2>
compose1(const Operation1& op1, const Operation2& op2) {
    return unary_compose<Operation1, Operation2>(op1, op2);
}


// ʹh(x) = f(g1(x), g2(x))
template <class Operation1, class Operation2, class Operation3>
class binary_compose
    : public unary_function<typename Operation2::argument_type,
                            typename Operation1::result_type> {
protected:
    Operation1 op1;
    Operation2 op2;
    Operation3 op3;
public:
    // constructor
    binary_compose(const Operation1& _op1, const Operation2& _op2, const Operation3& _op3)
        : op1(_op1), op2(_op2), op3(_op3) { }

    // call operator
    typename Operation1::result_type
    operator()(const typename Operation2::argument_type& x) const {
        return op1(op2(x), op3(x));
    }
};

// ��������������binary_compose�º�����ʵ��
template <class Operation1, class Operation2, class Operation3>
inline binary_compose<Operation1, Operation2, Operation3>
compose2(const Operation1& op1, const Operation2& op2, const Operation3& op3) {
    return binary_compose<Operation1, Operation2, Operation3>(op1, op2, op3);
}
