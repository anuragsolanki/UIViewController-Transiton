//  UIViewController+Transitions.h
//  
//  Created by Anurag Solanki on 23/05/13.
//


@interface UIViewController (Transitions)

- (void) presentModalViewController:(UIViewController *)modalViewController withPushDirection: (NSString *) direction;
- (void) dismissModalViewControllerWithPushDirection:(NSString *) direction;

@end
