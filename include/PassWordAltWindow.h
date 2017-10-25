//
//  PassWordAltWindow.h
//  PassWordStaticLibray
//
//  Created by 票票喵 on 2017/9/12.
//  Copyright © 2017年 静态库BUDLE测试. All rights reserved.
//

#import <UIKit/UIKit.h>


/*
 预留BLOCK
 */
typedef void(^WindowBlock)();

@protocol PassWordAltWindowDelegate <NSObject>

/*
 忘记密码代理方法
 */
-(void)forgetPassWord;


/*
 密码输入完成代理方法
 @progress passWord 输入的密码字符串
 */
-(void)InputEnd:(NSString *)passWord;

@end


@interface PassWordAltWindow : UIWindow
@property (nonatomic, copy) WindowBlock windBlock;
@property (nonatomic, weak) id<PassWordAltWindowDelegate> delegate;

//初始化WIDOW
-(id)initWithFrame:(CGRect)frame;
/*
 调用该方法后,记得将生成的对象置为nil;
 */
-(void)disMiss;

@end
