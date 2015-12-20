//
//  LXCircleAnimationView.h
//  LXCircleAnimationView
//
//  Created by Leexin on 15/12/18.
//  Copyright © 2015年 Garden.Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LXCircleAnimationView : UIView

@property (nonatomic, assign) CGFloat percent; // 百分比 0 - 100
@property (nonatomic, strong) UIImage *bgImage; // 背景图片
@property (nonatomic, strong) NSString *text; // 文字

@end
