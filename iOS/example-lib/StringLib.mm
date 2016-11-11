#import "StringLib.h"
#import "strlib.hh"
#import <vector>

@interface StringLib()

@property (readonly) Common::StringLib *strLib;

@end

@implementation StringLib

- (instancetype)initWithStr:(NSString *)str {
  self = [super init];
  if (self) {
    _strLib = new Common::StringLib([str UTF8String]);
  }
  return self;
}

- (NSString *)concatWithStr:(NSString *)str {
  string s = [str UTF8String];
  string result = self.strLib->concat(s);
  return [NSString stringWithCString:result.c_str() encoding:NSASCIIStringEncoding];
}

- (NSString *)getInternal {
  string *result = self.strLib->getInternal();
    std::vector<int> v = self.strLib->getVector();
  return [NSString stringWithCString:result->c_str() encoding:NSASCIIStringEncoding];
}

- (void)dealloc {
  delete(self.strLib);
}

@end
