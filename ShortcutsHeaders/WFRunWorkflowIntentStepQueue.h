//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WFDispatchSourceTimer, WFRunWorkflowIntentStep;
@protocol WFRunWorkflowIntentStepQueueDelegate;

@interface WFRunWorkflowIntentStepQueue : NSObject
{
    id <WFRunWorkflowIntentStepQueueDelegate> _delegate;
    NSMutableArray *_steps;
    WFRunWorkflowIntentStep *_pendingStep;
    CDUnknownBlockType _responseHandler;
    WFDispatchSourceTimer *_watchdogTimer;
    unsigned long long _timeoutCount;
}

@property(nonatomic) unsigned long long timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property(copy, nonatomic) WFDispatchSourceTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) WFRunWorkflowIntentStep *pendingStep; // @synthesize pendingStep=_pendingStep;
@property(readonly, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
@property(nonatomic) __weak id <WFRunWorkflowIntentStepQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)dequeueStepWithResponseHandler:(CDUnknownBlockType)arg1 fromWatchdog:(_Bool)arg2;
- (_Bool)continueWithResponseHandler:(CDUnknownBlockType)arg1;
- (void)addStep:(id)arg1 fromWatchdog:(_Bool)arg2;
- (void)addStep:(id)arg1;
- (void)reset;
- (void)cancelWatchdogTimer;
- (void)startWatchdogTimer;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)init;

@end

