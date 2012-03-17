//
//  ITPrefViewController.h
//  iTransmission
//
//  Created by Mike Chen on 12/6/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ITKeyboardController.h"
#import "ITPrefsController.h"

@interface ITPrefViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, ITKeyboardControllerDelegate>

@property (nonatomic, strong) ITKeyboardController *keyboardController;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableRPCCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableRPCAuthenticationCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *useWiFiCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *useMobileCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enablePortMapCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *RPCPortCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *RPCUsernameCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *RPCPasswordCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *bindPortCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *openWebInterfaceCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enablePeerLimitCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enablePeerGlobalCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableDownloadLimitCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableUploadLimitCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *fEnableLoggingCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableLimitCell;
@property (nonatomic, strong) IBOutlet UITableViewCell *enableAutoStartCell;
@property (nonatomic, strong) IBOutlet UISwitch *enableRPCSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *enableRPCAuthenticationSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *useWiFiSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *useMobileSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *enablePortMapSwitch;
@property (nonatomic, strong) IBOutlet UISwitch *enableAutoStart;
@property (nonatomic, strong) IBOutlet UISwitch *enableLimits;
@property (nonatomic, strong) IBOutlet UITextField *RPCPortTextField;
@property (nonatomic, strong) IBOutlet UITextField *RPCUsernameTextField;
@property (nonatomic, strong) IBOutlet UITextField *RPCPasswordTextField;
@property (nonatomic, strong) IBOutlet UITextField *bindPortTextField;
@property (nonatomic, strong) IBOutlet UITextField *MaxPeersPerTorrent;
@property (nonatomic, strong) IBOutlet UITextField *MaxPeersGlobal;
@property (nonatomic, strong) IBOutlet UITextField *DownloadLimit;
@property (nonatomic, strong) IBOutlet UITextField *UploadLimit;
@property (nonatomic, strong) IBOutlet UITextView *webInterfaceURLTextView;
@property (nonatomic, strong) IBOutlet ITPrefsController *userDefaults;
- (void)registerNotifications;

- (IBAction)enableRPCValueChanged:(id)sender;
- (IBAction)enableRPCAuthenticationValueChanged:(id)sender;
- (IBAction)useWiFiValueChanged:(id)sender;
- (IBAction)useMobileValueChanged:(id)sender;
- (IBAction)enablePortMapValueChanged:(id)sender;
- (IBAction)LoggingEnabled:(id)sender;
- (IBAction)enableLimits:(id)sender;
- (IBAction)enableAutoStart:(id)sender;

- (void)preferencesUpdateNotificationReceived:(NSNotification*)notification;

@end