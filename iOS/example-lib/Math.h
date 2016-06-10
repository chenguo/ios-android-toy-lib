#import <Foundation/Foundation.h>

@interface Math : NSObject

- (instancetype)init;
- (double)dotProduct:(double *)x
                       y:(double *)y
                  length:(long)length;

@end
