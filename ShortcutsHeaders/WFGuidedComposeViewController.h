//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFComposeViewController.h>

#import "WFGuidedActionListViewControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UIView, UIViewController, WFGuidedActionListViewController, WFGuidedBannerView, WFGuidedWorkflowViewController;

@interface WFGuidedComposeViewController : WFComposeViewController <WFGuidedActionListViewControllerDelegate>
{
    _Bool _initialAppearance;
    UIView *_actionsTintView;
    UIView *_workflowTintView;
    UIViewController *_focusedViewController;
    WFGuidedBannerView *_bannerView;
    long long _status;
    NSLayoutConstraint *_bannerViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bannerViewHeightConstraint; // @synthesize bannerViewHeightConstraint=_bannerViewHeightConstraint;
@property(nonatomic) _Bool initialAppearance; // @synthesize initialAppearance=_initialAppearance;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak WFGuidedBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak UIViewController *focusedViewController; // @synthesize focusedViewController=_focusedViewController;
@property(nonatomic) __weak UIView *workflowTintView; // @synthesize workflowTintView=_workflowTintView;
@property(nonatomic) __weak UIView *actionsTintView; // @synthesize actionsTintView=_actionsTintView;
- (void).cxx_destruct;
- (void)dragController:(id)arg1 wasAcceptedByDelegate:(id)arg2;
- (void)dragControllerWillBeginDragging:(id)arg1;
- (void)delayedFocusOnActions;
- (void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4 continueHandler:(CDUnknownBlockType)arg5;
- (void)workflowViewControllerWillRun:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)guidedActionsViewControllerDidCompleteWorkflow:(id)arg1;
- (void)guidedActionsViewControllerDidProgressWorkflow:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)focusOnViewController:(id)arg1 animated:(_Bool)arg2;
- (void)updateBottomContentInset;
- (void)finishTutorial;
- (void)setActionsHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateBannerView;
- (void)updateBannerViewHeight;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithWorkflow:(id)arg1 error:(out id *)arg2;

// Remaining properties
@property(readonly, nonatomic) WFGuidedActionListViewController *actionsViewController; // @dynamic actionsViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WFGuidedWorkflowViewController *workflowViewController; // @dynamic workflowViewController;

@end
