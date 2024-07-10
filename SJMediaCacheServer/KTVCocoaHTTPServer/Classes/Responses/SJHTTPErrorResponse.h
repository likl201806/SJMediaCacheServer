#import "SJHTTPResponse.h"

@interface SJHTTPErrorResponse : NSObject <SJHTTPResponse> {
    NSInteger _status;
}

- (id)initWithErrorCode:(int)httpErrorCode;

@end
