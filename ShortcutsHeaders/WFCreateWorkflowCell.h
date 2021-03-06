//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFBaseCollectionViewCell.h>

@class UIImageView, WFLibraryLabelLayer, WFLibraryLayoutMetrics;

@interface WFCreateWorkflowCell : WFBaseCollectionViewCell
{
    WFLibraryLayoutMetrics *_layoutMetrics;
    UIImageView *_iconView;
    WFLibraryLabelLayer *_nameLayer;
}

+ (id)plusImageOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) __weak WFLibraryLabelLayer *nameLayer; // @synthesize nameLayer=_nameLayer;
@property(readonly, nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WFLibraryLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
- (void).cxx_destruct;
- (id)accessibilityDragSourceDescriptors;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)updateNameLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

