#import <Foundation/Foundation.h>
#import "RMQQueue.h"
#import "RMQExchange.h"
#import "AMQProtocol.h"

@interface RMQChannel : NSObject
- (RMQQueue *)queue:(NSString *)queueName
         autoDelete:(BOOL)shouldAutoDelete
          exclusive:(BOOL)isExclusive;
- (RMQExchange *)defaultExchange;
- (void)close;
@end
