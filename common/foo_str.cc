#include "foo_str.hh"

Common::FooStr::FooStr(string initVal) {
  this->internalValue = new string(initVal);
}

Common::FooStr::~FooStr() {
  delete(this->internalValue);
}

string Common::FooStr::concat(string s) {
  return *this->internalValue + s;
}
