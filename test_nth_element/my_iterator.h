







//
//struct input_iterator_tag {};
//struct output_iterator_tag {};
//struct forward_iterator_tag : public input_iterator_tag {};
//struct bidirectional_iterator_tag : public forward_iterator_tag {};
//struct random_access_iterator_tag : public bidirectional_iterator_tag {};
//
//template <class T, class Distance>
//struct random_access_iterator {
//  typedef random_access_iterator_tag iterator_category;
//  typedef T                          value_type;
//  typedef Distance                   difference_type;
//  typedef T*                         pointer;
//  typedef T&                         reference;
//};
//
//template <class T, class Distance>
//inline T* value_type(const random_access_iterator<T, Distance>&) {
//  return (T*)(0);
//}

template <class T>
inline T* value_type(const T*) { return (T*)(0); }
