//
//  NSData+SKYDE.m
//  SKYDEManger
//
//  Created by yeven on 2017/2/4.
//  Copyright © 2017年 Skyworth. All rights reserved.
//

#import "NSData+SKYDE.h"

@implementation NSData (SKYDE)

- (NSDictionary *)dataToDic{
    NSError *err;
    id resultJSON = [NSJSONSerialization JSONObjectWithData:self options:kNilOptions error:&err];
    if ([resultJSON isKindOfClass:[NSDictionary class]]) {
        return (NSDictionary *)resultJSON;
    }
    return nil;
}

@end
