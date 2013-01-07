//
//  FaceView.h
//  Happiness
//
//  Created by Akshay on 1/6/13.
//
//

#import <UIKit/UIKit.h>

@interface FaceView : UIView

@property (nonatomic) CGFloat scale;

/**
 * Recognizes a pinch gesture
 */
- (void)pinch:(UIPinchGestureRecognizer *)gesture;


@end