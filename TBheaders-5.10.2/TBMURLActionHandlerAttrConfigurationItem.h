//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBMURLActionHandlerAttrConfigurationItem : NSObject
{
    _Bool _required;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_attribute;	// 32 = 0x20
}

@property(nonatomic) _Bool required; // @synthesize required=_required;
@property(readonly, nonatomic) NSString *attribute; // @synthesize attribute=_attribute;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithURLHandlerAttrConfiguration:(id)arg1;

@end
