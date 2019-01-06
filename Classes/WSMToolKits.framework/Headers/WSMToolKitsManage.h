
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WSMToolKitsManage : NSObject

+ (WSMToolKitsManage *)sharedManager;

- (void)WSMToolKitsbegin:(UIView *)view;

- (void)WSMToolKitsend:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
