#import <Foundation/Foundation.h>
#import "SJHTTPResponse.h"


@interface SJHTTPRedirectResponse : NSObject <SJHTTPResponse>
{
	NSString *redirectPath;
}

- (id)initWithPath:(NSString *)redirectPath;

@end
