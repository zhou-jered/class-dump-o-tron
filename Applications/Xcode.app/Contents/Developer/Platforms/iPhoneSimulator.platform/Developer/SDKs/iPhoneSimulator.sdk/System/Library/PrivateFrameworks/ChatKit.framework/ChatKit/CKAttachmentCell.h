//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CKAttachmentItem, NSObject<CKAttachmentCellDelegate>, UIImageView;

@interface CKAttachmentCell : UICollectionViewCell
{
    _Bool _editing;
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
}

@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) CKAttachmentItem *representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) NSObject<CKAttachmentCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
- (void)saveAttachment:(id)arg1;
- (void)more:(id)arg1;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)dealloc;

@end
