//
//  ODRefreshControl.h
//  ODRefreshControl
//
//  Created by Fabio Ritrovato on 6/13/12.
//  Copyright (c) 2012 orange in a day. All rights reserved.
//
// https://github.com/Sephiroth87/ODRefreshControl
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface ODRefreshControl : UIControl

@property (nonatomic, readonly) BOOL refreshing;
@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, assign) UIActivityIndicatorViewStyle activityIndicatorViewStyle;

- (id)initInScrollView:(UIScrollView *)scrollView;

// use custom activity indicator
- (id)initInScrollView:(UIScrollView *)scrollView withActivityIndicator:(id)activity;

// Tells the control that a refresh operation was started programmatically
- (void)beginRefreshing;

// Tells the control the refresh operation has ended
- (void)endRefreshing;

@end
