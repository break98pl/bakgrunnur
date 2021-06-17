#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>

@interface BakgrunnurAppNetworkController : PSListController
@property (nonatomic,retain) PSSpecifier *networkTransmissionSelectionSpecifier;
@property (nonatomic,retain) PSSpecifier *networkUnitSelectionSpecifier;
@property (nonatomic,retain) PSTextFieldSpecifier *rxbytesSpecifier;
@property (nonatomic,retain) PSTextFieldSpecifier *txbytesSpecifier;
@property (nonatomic,retain) NSString *identifier;
@property (nonatomic,retain) NSString *appName;
@end


