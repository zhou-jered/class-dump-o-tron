//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDGLParticleSystem.h>

@class TSDGLVoronoiTriangleData;

__attribute__((visibility("hidden")))
@interface KNBuildCrumbleSystem : TSDGLParticleSystem
{
    TSDGLVoronoiTriangleData *_voronoiTriangleData;
    struct {
        struct {
            float _field1;
            float _field2;
        } _field1;
        CDStruct_03942939 _field2;
        CDStruct_03942939 _field3;
        struct {
            float _field1;
            float _field2;
        } _field4;
    } *_cellParameters;
    double _speedMaxLimiter;
    double _speedMax;
    double _rotationMax;
    double _lifeSpanRandomness;
    double _lifeSpanDelay;
}

+ (unsigned long long)numberOfVerticesPerParticle;
+ (_Bool)willOverrideGeometry;
@property(nonatomic) double lifeSpanDelay; // @synthesize lifeSpanDelay=_lifeSpanDelay;
@property(nonatomic) double lifeSpanRandomness; // @synthesize lifeSpanRandomness=_lifeSpanRandomness;
@property(nonatomic) double rotationMax; // @synthesize rotationMax=_rotationMax;
@property(nonatomic) double speedMax; // @synthesize speedMax=_speedMax;
@property(nonatomic) double speedMaxLimiter; // @synthesize speedMaxLimiter=_speedMaxLimiter;
- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)rotationAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_b2fbf00d)centerAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_b2fbf00d)vertexPositionAtVertexIndex:(unsigned long long)arg1 particleIndexPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithNumberOfParticles:(unsigned long long)arg1 objectSize:(struct CGSize)arg2 slideSize:(struct CGSize)arg3 duration:(double)arg4 direction:(unsigned long long)arg5 shader:(id)arg6 percentOfCellsToSplit:(double)arg7;
- (void)p_setupParameters;

@end
