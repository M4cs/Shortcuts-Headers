//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSURL;

@interface WFIntentExtensionMailbox : NSObject
{
    NSURL *_directoryURL;
    NSURL *_confirmationURL;
    NSFileHandle *_waitingHandle;
}

@property(retain, nonatomic) NSFileHandle *waitingHandle; // @synthesize waitingHandle=_waitingHandle;
@property(readonly, copy, nonatomic) NSURL *confirmationURL; // @synthesize confirmationURL=_confirmationURL;
@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (_Bool)isWaitingForResumeWithWorkflowID:(id)arg1 interaction:(id *)arg2 error:(id *)arg3;
- (void)stopWaiting;
- (_Bool)beginWaitingWithWorkflowID:(id)arg1 interaction:(id)arg2 error:(id *)arg3;
- (_Bool)beginWaitingForResumeOfWorkflowID:(id)arg1 error:(id *)arg2;
- (_Bool)beginWaitingForConfirmationOfWorkflowID:(id)arg1 interaction:(id)arg2 error:(id *)arg3;
- (id)initWithDirectoryURL:(id)arg1;
- (id)init;

@end
