#import <UIKit/UIKit.h>

@interface NappItemProvider : UIActivityItemProvider
@property (nonatomic, strong) NSString *customText;
@property (nonatomic, strong) NSString *customTextMail;
@property (nonatomic, strong) NSString *shareURL;
@property (nonatomic, strong) NSString *twitterString;
@property (nonatomic, strong) NSURL *URL; // facebook requires nsurl

@end