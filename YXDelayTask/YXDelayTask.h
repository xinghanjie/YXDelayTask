//
//  YXDelayTask.h
//  KG_Video
//
//  Created by baye on 2018/1/15.
//  Copyright © 2018年 快更. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXDelayTask : NSObject

+ (instancetype)delay:(NSTimeInterval)time queue:(dispatch_queue_t)queue task:(dispatch_block_t)task;
+ (instancetype)delay:(NSTimeInterval)time task:(dispatch_block_t)task;
- (void)cancel;

@end