#ifndef _STRING_LIB_H_
#define _STRING_LIB_H_

#include <string>
using std::string;

namespace Common {

  class StringLib {

  public:
    StringLib(string initVal);
    ~StringLib();
    string concat(string s);
    string* getInternal();

  private:
    string *internalValue;
  };

}

#endif // _STRING_LIB_H_
