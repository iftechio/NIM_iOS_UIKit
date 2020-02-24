//
//  NIMAdvancedTeamCardViewController.h
//  NIM
//
//  Created by chris on 15/3/25.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import "NIMTeamCardViewController.h"
#import "NIMTeamListDataManager.h"
#import "NIMTeamCardHeaderView.h"
#import <NIMSDK/NIMSDK.h>

@interface NIMAdvancedTeamCardViewController : NIMTeamCardViewController

@property (nonatomic, strong) NIMTeamListDataManager *dataSource;
@property (nonatomic,strong) NIMTeamCardHeaderView *headerView;

- (instancetype)initWithTeam:(NIMTeam *)team
                     session:(NIMSession *)session
                      option:(NIMTeamCardViewControllerOption *)option;

- (void)didTapConsult;
- (void)enterMemberCard;
- (void)refreshTitle;
- (void)reloadData;

- (void)didUpdateTeamName:(NSString *)name;
- (void)onTouchAvatar:(id)sender;

@end
