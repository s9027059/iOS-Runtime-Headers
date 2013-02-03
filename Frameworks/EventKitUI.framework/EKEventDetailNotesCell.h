/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITextView, UIFont, UILabel;

@interface EKEventDetailNotesCell : EKEventDetailCell {
    UIFont *_font;
    BOOL _isTruncatingNotes;
    UILabel *_notesTitleView;
    UITextView *_notesView;
}

@property(retain) UIFont * _font;
@property(readonly) BOOL isTruncatingNotes;

- (id)_font;
- (id)_notesTitleView;
- (id)_notesView;
- (struct CGSize { float x1; float x2; })_truncatedNotesViewSize:(float)arg1;
- (void)dealloc;
- (BOOL)isTruncatingNotes;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;
- (void)set_font:(id)arg1;
- (BOOL)update;

@end