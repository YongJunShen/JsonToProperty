//
//  ESJsonFormatManager.h
//  JsonToPropertyExtension
//
//  Created by vincent on 2022/3/30.
//

#import <Foundation/Foundation.h>
#import "ESClassInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface ESJsonFormatManager : NSObject

/**
 *  解析一个类里面属性字段的内容
 *
 *  @param classInfo 类信息
 *
 *  atreturn
 */
+ (NSString *)parsePropertyContentWithClassInfo:(ESClassInfo *)classInfo;

/**
 *  解析一个类头文件的内容(会根据是否创建文件返回的内容有所不同)
 *
 *  @param classInfo 类信息
 *
 *  @return 类头文件里面的内容
 */
+ (NSString *)parseClassHeaderContentWithClassInfo:(ESClassInfo *)classInfo;

@end

NS_ASSUME_NONNULL_END
