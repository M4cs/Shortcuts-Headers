//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WFGalleryWorkflow;
@protocol _TtP9Shortcuts41GalleryCollectionEditWorkflowCellDelegate_;

@interface _TtC9Shortcuts33GalleryCollectionEditWorkflowCell : UITableViewCell
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: workflow
    // Error parsing type: , name: nameLabel
    // Error parsing type: , name: infoIcon.storage
    // Error parsing type: , name: iconImageView
}

- (CDUnknownBlockType).cxx_destruct;
- (void)infoButtonTapped;
- (void)prepareForReuse;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) WFGalleryWorkflow *workflow; // @synthesize workflow;
@property(nonatomic) __weak id <_TtP9Shortcuts41GalleryCollectionEditWorkflowCellDelegate_> delegate; // @synthesize delegate;

@end
