//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WFUserInterface-Protocol.h"

@class INInteraction, NSArray, NSString, NSURL;

@protocol WFSiriUserInterface <WFUserInterface>
@property(retain, nonatomic) NSArray *airPlayRouteIDs;
- (void)setAirPlayAudioRoutesIfNecessaryWithCompletionHandler:(void (^)(void))arg1;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)openInteractionInApp:(INInteraction *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)showInteraction:(INInteraction *)arg1 requiringConfirmation:(_Bool)arg2 requiringAuthentication:(_Bool)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)speakText:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

