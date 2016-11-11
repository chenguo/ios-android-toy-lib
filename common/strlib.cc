#include "strlib.hh"

Common::StringLib::StringLib(string initVal) {
  this->internalValue = new string(initVal);
    this->testVec.push_back(0);
    this->testVec.push_back(1);
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

vector<int> Common::StringLib::getVector() {
    return this->testVec;
}