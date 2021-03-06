/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/WDBlock.h>

@class NSMutableArray, WDTableProperties;

@interface WDTable : WDBlock
{
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (id)newRunIterator;
- (id)runIterator;
- (id)newCellIterator;
- (id)cellIterator;
- (id)newRowIterator;
- (id)rowIterator;
- (int)nestingLevel;
- (int)blockType;
- (void)clearRows;
- (id)addRow;
- (id)rowAt:(unsigned int)arg1;
- (unsigned int)rowCount;
- (void)clearProperties;
- (id)properties;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end

