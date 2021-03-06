//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UIAccessibilityElement, UIButton, UITextView;

@interface WFGuidedBannerView : UIView
{
    UIButton *_finishedButton;
    NSString *_accessibilityLabel;
    UITextView *_textView;
    UIAccessibilityElement *_textElement;
    NSLayoutConstraint *_insetConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *insetConstraint; // @synthesize insetConstraint=_insetConstraint;
@property(readonly, nonatomic) UIAccessibilityElement *textElement; // @synthesize textElement=_textElement;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) __weak UIButton *finishedButton; // @synthesize finishedButton=_finishedButton;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
@property(nonatomic) _Bool finishedButtonVisible;
@property(copy, nonatomic) NSAttributedString *bannerText;
@property(nonatomic) _Bool fadedIn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

