#import <Foundation/Foundation.h>

@interface StringLib : NSObject

- (instancetype)initWithStr:(NSString *)str;
- (NSString *)getInternal;
- (NSString *)concatWithStr:(NSString *)str;

@end
