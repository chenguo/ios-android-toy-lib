#import "FooStr.h"
#import "foo_str.hh"

@interface FooStr()

@property (readonly) Common::FooStr *fooStr;

@end

@implementation FooStr

- (instancetype)initWithStr:(NSString *)str {
  self = [super init];
  if (self) {
    _fooStr = new Common::FooStr([str UTF8String]);
  }
  return self;
}

- (NSString *)concatWithStr:(NSString *)str {
  string s = [str UTF8String];
  string result = self.fooStr->concat(s);
  return [NSString stringWithCString:result.c_str() encoding:NSASCIIStringEncoding];
}

- (void)dealloc {
  delete(self.fooStr);
}

@end
