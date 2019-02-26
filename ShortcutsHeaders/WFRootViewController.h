//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITabBarControllerDelegate-Protocol.h"
#import "WFWelcomeViewControllerDelegate-Protocol.h"

@class NSString, UITabBarController, UIView, WFHomeViewController, WFTutorialProgressStore, _TtC9Shortcuts29GalleryFeaturedViewController;

@interface WFRootViewController : UIViewController <WFWelcomeViewControllerDelegate, UITabBarControllerDelegate>
{
    WFHomeViewController *_workflowsViewController;
    _TtC9Shortcuts29GalleryFeaturedViewController *_galleryViewController;
    WFTutorialProgressStore *_tutorialProgressStore;
    UITabBarController *_tabBarController;
    UIView *_fakeLaunchScreenView;
}

@property(nonatomic) __weak UIView *fakeLaunchScreenView; // @synthesize fakeLaunchScreenView=_fakeLaunchScreenView;
@property(nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(readonly, nonatomic) WFTutorialProgressStore *tutorialProgressStore; // @synthesize tutorialProgressStore=_tutorialProgressStore;
@property(readonly, nonatomic) _TtC9Shortcuts29GalleryFeaturedViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
@property(readonly, nonatomic) WFHomeViewController *workflowsViewController; // @synthesize workflowsViewController=_workflowsViewController;
- (void).cxx_destruct;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)welcomeViewControllerDidFinish:(id)arg1;
- (void)switchToView:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchToView:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTutorialProgressStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
