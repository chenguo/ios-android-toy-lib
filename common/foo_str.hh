#ifndef _FOO_STR_H_
#define _FOO_STR_H_

#include <string>
using std::string;

namespace Common {

  class FooStr {

  public:
    FooStr(string initVal);
    string concat(string s);
    ~FooStr();

  private:
    string *internalValue;
  };

}

#endif // _FOO_STR_H_
