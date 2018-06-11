//// file: 1config.cpp
//// test configurations defined in <stl_config.h>
//#include <vector>       // which included <stl_algobase.h>, and then <stl_config.h>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//# if defined(__sgi)
//    cout << "__sgi" << endl;        // none!
//#endif
//
//#if defined(__GNUC__)
//    cout << "__GNUC__" << endl;     // __GNUC__
//    cout << __GNUC__ << ' ' << __GNUC_MINOR__ << endl;      //5 3
//    cout << __GLIBCXX__ << endl;        // __GLIBCXX
//#endif
//
//// case 2
//#ifdef __STL_NO_DRAND48
//    cout << "__STL_NO_DRAND48 defined" << endl;
//#else
//    cout << "__STL_NO_DRAND48 undefined" << endl;
//#endif
//
//// case 3
//#ifdef __STL_STATIC_TEMPLATE_MEMBER_BUG
//    cout << "__STL_STATIC_TEMPLATE_MEMBER_BUG defined" << endl;
//#else
//    cout << "__STL_STATIC_TEMPLATE_MEMBER_BUG undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_CLASS_PARTIAL_SPECIALIZATION
//    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION defined" << endl;
//#else
//    cout << "__STL_CLASS_PARTIAL_SPECIALIZATION undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_FUNCTION_TMPL_PARTIAL_ORDER
//    cout << "__STL_FUNCTION_TMPL_PARTIAL_ORDER defined" << endl;
//#else
//    cout << "__STL_FUNCTION_TMPL_PARTIAL_ORDER undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_EXPLICIT_FUNCTION_TMPL_ARGS
//    cout << "__STL_EXPLICIT_FUNCTION_TMPL_ARGS defined" << endl;
//#else
//    cout << "__STL_EXPLICIT_FUNCTION_TMPL_ARGS undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_MEMBER_TEMPLATES
//    cout << "__STL_MEMBER_TEMPLATES defined" << endl;
//#else
//    cout << "__STL_MEMBER_TEMPLATES undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_LIMITED_DEFAULT_TEMPLATES
//    cout << "__STL_LIMITED_DEFAULT_TEMPLATES defined" << endl;
//#else
//    cout << "__STL_LIMITED_DEFAULT_TEMPLATES undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_NO_TYPE_TMPL_PARAM_BUG
//    cout << "__STL_NO_TYPE_TMPL_PARAM_BUG defined" << endl;
//#else
//    cout << "__STL_NO_TYPE_TMPL_PARAM_BUG undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_STL_NO_ARROW_OPERATOR
//    cout << "__STL_STL_NO_ARROW_OPERATOR defined" << endl;
//#else
//    cout << "__STL_STL_NO_ARROW_OPERATOR undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_USE_EXCEPTIONS
//    cout << "__STL_USE_EXCEPTIONS defined" << endl;
//#else
//    cout << "__STL_USE_EXCEPTIONS undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_USE_NAMESPACES
//    cout << "__STL_USE_NAMESPACES defined" << endl;
//#else
//    cout << "__STL_USE_NAMESPACES undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_SGI_THREADS
//    cout << "__STL_SGI_THREADS defined" << endl;
//#else
//    cout << "__STL_SGI_THREADS undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_WIN32THREADS
//    cout << "__STL_WIN32THREADS defined" << endl;
//#else
//    cout << "__STL_WIN32THREADS undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_NO_NAMESPACES
//    cout << "__STL_NO_NAMESPACES defined" << endl;
//#else
//    cout << "__STL_NO_NAMESPACES undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_NEED_TYPENAME
//    cout << "__STL_NEED_TYPENAME defined" << endl;
//#else
//    cout << "__STL_NEED_TYPENAME undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_NEED_BOOL
//    cout << "__STL_NEED_BOOL defined" << endl;
//#else
//    cout << "__STL_NEED_BOOL undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_NEED_EXPLICIT
//    cout << "__STL_NEED_EXPLICIT defined" << endl;
//#else
//    cout << "__STL_NEED_EXPLICIT undefined" << endl;
//#endif
//
//// case 5
//#ifdef __STL_ASSERTIONS
//    cout << "__STL_ASSERTIONS defined" << endl;
//#else
//    cout << "__STL_ASSERTIONS undefined" << endl;
//#endif
//
//    return 0;
//}
