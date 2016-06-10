#import "Math.h"
#import "math.hh"

@interface Math ()

@property (readonly) Common::Math* math;

@end

@implementation Math

- (instancetype)init {
  self = [super init];
  if (self != nil) {
    _math = new Common::Math();
  }
  return self;
}

- (double)dotProduct:(double *)x
                       y:(double *)y
                  length:(long)length {
  return self.math->dotProduct(x, y, length);
}

- (void)dealloc {
  delete(self.math);
}

@end
