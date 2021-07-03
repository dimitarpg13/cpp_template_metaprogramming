
template<class ForwardIterator1, class ForwardIterator2>
void iter_swap(ForwardIterator1 i1, ForwardIterator2 i2)
{
   // Note: the c++ standard required the typename keyword
   // when we use a dependent name as though it refers to
   // a type. ForwardIterator1::value_type may or may not
   // name a type depending on the particular ForwardIterator1
   // that is passed.
   typename ForwardIterator1::value_type tmp = *i1;
   *i1 = *i2;
   *i2 = tmp;
}

int main(const int argc, const char* argv[]) {
   return 0;
}
