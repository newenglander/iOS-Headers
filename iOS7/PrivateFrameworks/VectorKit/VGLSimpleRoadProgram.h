/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

@interface VGLSimpleRoadProgram : VGLProgram
{
    int _uTextureSampler;
    int _textureSampler;
    int _uLineWidth;
    float _lineWidth;
}

@property(nonatomic) int textureSampler; // @synthesize textureSampler=_textureSampler;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)setup;

@end

