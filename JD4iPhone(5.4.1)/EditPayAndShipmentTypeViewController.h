//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrderSubViewController.h"

#import "ChooseDeliveryServiceDelegate.h"
#import "OrderSubViewControllerDelegate.h"
#import "PayAndShipLayoutDelegate.h"
#import "PickSiteViewControllerDelegate.h"

@class ChoosePaymentTypeView, ChooseShipmentTypeView, DeliveryTopView, JDOrderPayAndShipmentEditModel, JDOrderPayAndShipmentParameterModel, JDStoreNetwork, NOINotifyView, NSArray, NSString, UIButton, UIScrollView, UITableView, pickShipmentModel;

@interface EditPayAndShipmentTypeViewController : OrderSubViewController <OrderSubViewControllerDelegate, PickSiteViewControllerDelegate, ChooseDeliveryServiceDelegate, PayAndShipLayoutDelegate>
{
    CDUnknownBlockType saveBlock;
    CDUnknownBlockType backBlock;
    JDOrderPayAndShipmentParameterModel *parameterModel;
    _Bool reSetPickDate_;
    _Bool networkRequesting_;
    _Bool payNetworkRequesting_;
    _Bool shipNetworkRequesting_;
    _Bool pickNetworkRequesting_;
    _Bool deliveryNetworkRequesting_;
    float _Addresslng;
    float _Addresslat;
    double btnOriginY;
    long long scroll_;
    NSString *pickMessage_;
    UIButton *_acceptButton;
    UIScrollView *contentView_;
    JDStoreNetwork *network_;
    JDStoreNetwork *payMentNetwork_;
    JDStoreNetwork *shipMentNetwork_;
    JDStoreNetwork *pickSiteNetwork_;
    JDStoreNetwork *deliveryNetwork_;
    JDOrderPayAndShipmentEditModel *payAndShipmentEditModel;
    pickShipmentModel *_pickSiteModel;
    ChoosePaymentTypeView *pay_;
    ChooseShipmentTypeView *ship_;
    NOINotifyView *_notifyView;
    _Bool notifyViewShowBool;
    _Bool _isDegraded;
    _Bool _needRefresh;
    UITableView *_contentTableView;
    NSArray *_deliveryServiceArray;
    DeliveryTopView *_deliveryTopView;
}

@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool isDegraded; // @synthesize isDegraded=_isDegraded;
@property(retain, nonatomic) DeliveryTopView *deliveryTopView; // @synthesize deliveryTopView=_deliveryTopView;
@property(retain, nonatomic) NSArray *deliveryServiceArray; // @synthesize deliveryServiceArray=_deliveryServiceArray;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) JDOrderPayAndShipmentParameterModel *parameterModel; // @synthesize parameterModel;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock;
- (void).cxx_destruct;
- (void)notifyViewWillDisapper:(long long)arg1 animated:(_Bool)arg2;
- (void)notifyViewWillApper:(long long)arg1 animated:(_Bool)arg2;
- (void)showNotifyMessage:(id)arg1 notifyType:(long long)arg2;
- (void)didSelectedPickSite:(id)arg1;
- (void)didSelected:(id)arg1 model:(id)arg2;
- (void)subviewsLayout;
- (void)setSureBtnEnable;
- (void)parserPickData:(id)arg1 error:(id)arg2;
- (void)loadPickDateSiteWithId:(long long)arg1;
- (void)pushPickSiteVc:(id)arg1;
- (void)sortPickSites;
- (long long)calcPostion:(id)arg1 pickSite:(id)arg2;
- (void)pickSiteChanged:(id)arg1;
- (void)paymentTypeChanged:(id)arg1;
- (void)parserDeliveryData:(id)arg1 error:(id)arg2;
- (void)getDeliveryServiceData;
- (void)parserShipMentData:(id)arg1 error:(id)arg2;
- (void)loadShipmentTypeWithPaymentId:(long long)arg1;
- (void)parserPayData:(id)arg1 error:(id)arg2;
- (void)getPayMentData;
- (void)showPickSitesMapViewController:(id)arg1;
- (void)setEnabledSwipeToParent:(_Bool)arg1;
- (void)jzdPickerViewAppearStatus:(id)arg1;
- (void)pickerViewWillDisapper:(id)arg1;
- (void)pickerViewWillApper:(id)arg1;
- (void)complatePayAndShiment:(id)arg1;
- (void)blankPageAction:(id)arg1;
- (void)blankPageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)deliveryViewHeightWithIndex:(id)arg1;
- (id)getDeliveryServiceCell:(id)arg1;
- (id)getShipMentTableViewCell;
- (id)getPayMentTableViewCell;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDeliveryServiceCell:(id)arg1;
- (long long)getPositionIndex:(id)arg1;
- (void)backButtonClicked;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
