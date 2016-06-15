#include "strlib.hh"

Common::StringLib::StringLib(string initVal) {
  this->internalValue = new string(initVal);
}

Common::StringLib::~StringLib() {
  delete(this->internalValue);
}

string Common::StringLib::concat(string s) {
  return *(this->internalValue) + s;
}

string* Common::StringLib::getInternal() {
  return this->internalValue;
}
