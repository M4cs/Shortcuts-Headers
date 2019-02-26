//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UIButton, UILabel;
@protocol WFGuidedActionListViewControllerDelegate;

@interface WFGuidedActionListViewController : UITableViewController
{
    _Bool _completedWorkflow;
    _Bool _skipped;
    id <WFGuidedActionListViewControllerDelegate> _delegate;
    NSArray *_possibleWorkflows;
    UILabel *_tipLabel;
    UIButton *_skipButton;
}

@property(nonatomic) _Bool skipped; // @synthesize skipped=_skipped;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(readonly, nonatomic) NSArray *possibleWorkflows; // @synthesize possibleWorkflows=_possibleWorkflows;
@property(readonly, nonatomic) _Bool completedWorkflow; // @synthesize completedWorkflow=_completedWorkflow;
@property(nonatomic) __weak id <WFGuidedActionListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end
