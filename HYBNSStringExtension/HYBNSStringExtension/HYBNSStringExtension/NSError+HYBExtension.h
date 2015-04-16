//
//  NSError+HYBExtension.h
//  HYBNSStringExtension
//
//  Created by huangyibiao on 15/4/16.
//  Copyright (c) 2015年 huangyibiao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>

/**
 * 加密算法错误Error Domin
 */
extern NSString * const kCommonCryptoErrorDomain;

@interface NSError (HYBExtension)

/**
 * 根据加密算法状态，生成错误对象
 */
+ (NSError *)errorWithCCCryptorStatus:(CCCryptorStatus)status;

@end
