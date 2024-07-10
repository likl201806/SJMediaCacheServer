#import <Foundation/Foundation.h>
#import "SJHTTPResponse.h"


@interface SJHTTPDataResponse : NSObject <SJHTTPResponse>
{
	NSUInteger offset;
	NSData *data;
}

- (id)initWithData:(NSData *)data;

@end
