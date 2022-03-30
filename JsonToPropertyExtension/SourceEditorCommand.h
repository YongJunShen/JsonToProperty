//
//  SourceEditorCommand.h
//  JsonToPropertyExtension
//
//  Created by vincent on 2022/3/30.
//

#import <XcodeKit/XcodeKit.h>

@interface SourceEditorCommand : NSObject <XCSourceEditorCommand>

@property (nonatomic) BOOL isSwift;

@end
