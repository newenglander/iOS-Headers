/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface SMSSMILInterpreter : NSObject
{
    NSArray *_originalParts;
    struct _xmlSAXHandler {
        void *internalSubset;
        void *isStandalone;
        void *hasInternalSubset;
        void *hasExternalSubset;
        void *resolveEntity;
        void *getEntity;
        void *entityDecl;
        void *notationDecl;
        void *attributeDecl;
        void *elementDecl;
        void *unparsedEntityDecl;
        void *setDocumentLocator;
        void *startDocument;
        void *endDocument;
        void *startElement;
        void *endElement;
        void *reference;
        void *characters;
        void *ignorableWhitespace;
        void *processingInstruction;
        void *comment;
        void *warning;
        void *error;
        void *fatalError;
        void *getParameterEntity;
        void *cdataBlock;
        void *externalSubset;
        unsigned int initialized;
        void *_private;
        void *startElementNs;
        void *endElementNs;
        void *serror;
    } _saxHandler;
    unsigned int _handlerInitialized:1;
}

- (id)initWithMessageParts:(id)arg1;
- (void)dealloc;
- (id)orderedParts;
- (id)_smilData;
- (id)_orderedPartsForSMILString:(id)arg1;
- (id)_newDictionaryRepresentationOfOriginalParts;
- (void)_initializeSAXHandler;
- (id)_parseParTagArrayFromSMIL:(id)arg1;

@end

