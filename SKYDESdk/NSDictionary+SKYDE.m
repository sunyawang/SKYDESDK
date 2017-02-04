//
//  NSDictionary+SKYDE.m
//  SKYDEManger
//
//  Created by yeven on 2017/2/4.
//  Copyright © 2017年 Skyworth. All rights reserved.
//

#import "NSDictionary+SKYDE.h"

@implementation NSDictionary (SKYDE)

- (NSString *)dicToJson
{
    NSData *jsonData;
    if ([NSJSONSerialization isValidJSONObject:self])
    {
        NSError *error;
        jsonData = [NSJSONSerialization dataWithJSONObject:self options:kNilOptions error:&error];
    }
    
    return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
}

- (NSData *)dicToData {
    NSData *jsonData;
    if ([NSJSONSerialization isValidJSONObject:self]) {
        NSError *error;
        jsonData = [NSJSONSerialization dataWithJSONObject:self options:kNilOptions error:&error];
    }
    
    return jsonData;
}

@end
