#include "mathlib.hh"

double Common::MathLib::dotProduct(double x[], double y[], long length) {
  double result = 0;
  for (long i = 0; i < length; i++) {
    result += x[i] * y[i];
  }
  return result;
}
