#include <iostream>
#include <vector>

using namepspace std;

template <typename T>
class Numbers
{

    private:
      int ID;
      vector<T> values;
      static int NumofObjects;

    public:
      Numbers();
      ~Numbers();
      static int getNumObjects(void);
        int operator >(const Numbers& n);
    friend  void printNumbers(Numbers n);
}