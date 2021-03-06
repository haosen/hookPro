//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDtableViewDictionary, NSString, UIView;

@interface MDtableViewGroups : NSObject
{
    MDtableViewDictionary *cells;
    NSString *title;
    NSString *footer;
    UIView *headerView;
    UIView *footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) NSString *footer; // @synthesize footer;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(readonly, nonatomic) MDtableViewDictionary *cells; // @synthesize cells;
- (void)addCell:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

