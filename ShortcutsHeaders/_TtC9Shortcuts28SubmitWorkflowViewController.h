//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "WFGallerySubmissionController-Protocol.h"

@protocol WFGallerySubmissionControllerDelegate;

@interface _TtC9Shortcuts28SubmitWorkflowViewController : UITableViewController <WFGallerySubmissionController>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workflow
    // Error parsing type: , name: previewView.storage
    // Error parsing type: , name: workflowNameCell.storage
    // Error parsing type: , name: shortDescriptionCell.storage
    // Error parsing type: , name: longDescriptionCell.storage
    // Error parsing type: , name: isCancelling
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)didTapSubmit;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflow:(id)arg1;
@property(nonatomic) __weak id <WFGallerySubmissionControllerDelegate> delegate; // @synthesize delegate;

@end

