////  ORMMAViewController.h//  AdMobileSamples////  Created by Slava on 5/17/11.//  Copyright 2011 Team Force. All rights reserved.//#import <Foundation/Foundation.h>#import "AdMobileSamplesBaseViewController.h"@interface ORMMAViewController : AdMobileSamplesBaseViewController <MASTAdViewDelegate>{	NSInteger _newZone;	NSInteger _newSite;}-(id)initWithZone:(NSInteger)zone site:(NSInteger)site;@end