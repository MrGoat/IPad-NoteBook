//
//  ViewController.h
//  LabNotebook
//
//  Created by Mr Gout on 9/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    CGPoint lastPoint;
	UIImageView *drawImage;
	BOOL mouseSwiped;	
	int mouseMoved;
}
@end
