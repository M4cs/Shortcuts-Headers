//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface WFGalleryImageDownloader : NSObject
{
    NSCache *_cache;
}

@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (_Bool)getImageAtURL:(id)arg1 scale:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;
- (id)init;

@end

