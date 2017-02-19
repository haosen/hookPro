//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSFileManager, NSMutableArray, NSString;

@interface LVBundle : NSObject
{
    NSMutableArray *_scriptPaths;	// 8 = 0x8
    NSMutableArray *_resourcePaths;	// 16 = 0x10
    NSFileManager *_fileManager;	// 24 = 0x18
    NSString *_currentPath;	// 32 = 0x20
}

- (void).cxx_destruct;
- (id)signedScriptWithName:(id)arg1 rsa:(id)arg2;
- (id)scriptWithName:(id)arg1;
- (id)scriptPathWithName:(id)arg1;
- (id)imageWithName:(id)arg1;
- (id)resourceWithName:(id)arg1;
- (id)resourcePathWithName:(id)arg1;
- (id)absolutePath:(id)arg1;
- (void)removeScriptPath:(id)arg1;
- (void)addScriptPath:(id)arg1;
@property(readonly, nonatomic) NSArray *scriptPaths; // @dynamic scriptPaths;
- (void)removeResourcePath:(id)arg1;
- (void)addResourcePath:(id)arg1;
@property(readonly, nonatomic) NSArray *resourcePaths; // @dynamic resourcePaths;
- (void)changeCurrentPath:(id)arg1;
@property(readonly, nonatomic) NSString *currentPath; // @dynamic currentPath;
- (id)init;

@end
