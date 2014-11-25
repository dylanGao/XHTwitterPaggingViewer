//
//  XHCategoryMenuView.h
//  XHTwitterPaggingViewerExample
//
//  Created by dw_iOS on 14-8-14.
//  Copyright (c) 2014年 曾宪华 QQ群: (142557668) QQ:543413507  Gmail:xhzengAIB@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XHCategoryMenuView : UIView

@property (nonatomic, strong) NSArray *menus;

- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;

- (void)reloadData;

@end
