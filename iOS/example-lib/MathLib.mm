#import "MathLib.h"
#import "mathlib.hh"

@interface MathLib ()

@property (readonly) Common::MathLib* mathLib;

@end

@implementation MathLib

- (instancetype)init {
  self = [super init];
  if (self != nil) {
    _mathLib = new Common::MathLib();
  }
  return self;
}

- (double)dotProduct:(double *)x
                       y:(double *)y
                  length:(long)length {
  return self.mathLib->dotProduct(x, y, length);
}

- (void)dealloc {
  delete(self.mathLib);
}

@end
