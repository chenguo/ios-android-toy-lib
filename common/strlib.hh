#ifndef _STRING_LIB_H_
#define _STRING_LIB_H_

#include <string>
#include <vector>
using std::string;
using std::vector;

namespace Common {

  class StringLib {

  public:
    StringLib(string initVal);
    ~StringLib();
    string concat(string s);
    string* getInternal();
    vector<int> getVector();

  private:
    string *internalValue;
    vector<int> testVec;
  };

}

#endif // _STRING_LIB_H_
