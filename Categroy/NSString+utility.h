//
//  NSString+utility.h
//  TB
//
//  Created by kimilee on 13-6-9.
//  Copyright (c) 2013年 kimilee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (utility)
- (NSString *) MD5Hash;
- (NSString *)URLEncodedString;
- (NSString *)URLDecodedString;
+(NSString *)getURLcodeString:(NSString *)string;
+(NSString *)getLImageUrl:(NSString *)string;
+(NSString *)getSImageUrl:(NSString *)string;
@end
