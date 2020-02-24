//
//  NTESTeamMemberListViewController.h
//  NIM
//
//  Created by chris on 15/3/26.
//  Copyright (c) 2015年 Netease. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <NIMSDK/NIMSDK.h>
#import "NIMTeamCardHeaderCell.h"
#import "NIMTeamMemberListDataSource.h"

@interface NIMTeamMemberListViewController : UIViewController <UICollectionViewDataSource, NIMTeamCardHeaderCellDelegate>

@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, weak) id <NIMTeamMemberListDataSource> dataSource;

- (instancetype)initWithDataSource:(id<NIMTeamMemberListDataSource>)dataSource;
- (void)loadNextData;

@end
