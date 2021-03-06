/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UINavigationController, UITableView, NSArray;

@interface CKLinksController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    id _delegate;
    UINavigationController *_navigationController;
    NSArray *_linkProps;
    UITableView *_table;
}


- (void)dealloc;
- (id)initWithNavigationController:(id)arg1;
- (void)setLinkProperties:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;

@end
