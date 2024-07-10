#import <Foundation/Foundation.h>
#import "SJHTTPResponse.h"

@class SJHTTPConnection;


@interface SJHTTPFileResponse : NSObject <SJHTTPResponse>
{
	SJHTTPConnection *connection;
	
	NSString *filePath;
	UInt64 fileLength;
	UInt64 fileOffset;
	
	BOOL aborted;
	
	int fileFD;
	void *buffer;
	NSUInteger bufferSize;
}

- (id)initWithFilePath:(NSString *)filePath forConnection:(SJHTTPConnection *)connection;
- (NSString *)filePath;

@end
