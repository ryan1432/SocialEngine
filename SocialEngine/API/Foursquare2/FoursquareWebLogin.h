//
//  ElanceWebLogin.h
//  elance
//
//  Created by Constantine Fry on 12/20/10.
//  Copyright 2010 Home. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoursquareWebLogin;

@protocol FoursquareWebLoginDelegate <NSObject>

- (void) foursquareWebLoginWasCanceled:(FoursquareWebLogin*) aWebLogin;

@end

@interface FoursquareWebLogin : UIViewController<UIWebViewDelegate>
{
	NSString *_url;
	UIWebView *webView;
	SEL selector;
    id<FoursquareWebLoginDelegate> delegate;
    UIActivityIndicatorView* activityIndicator;
}

@property (nonatomic,assign) id delegate;
@property (nonatomic,assign)SEL selector;

- (id) initWithUrl:(NSString*)url;
@end
