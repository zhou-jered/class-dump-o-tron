//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCNSceneRenderer.h"
#import "SCNTechniqueSupport.h"

@class EAGLContext, NSArray, NSRecursiveLock, NSString, SCNDisplayLink, SCNEventHandler, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport>
{
    double _currentSystemTime;
    NSString *__ibSceneName;
    unsigned int _ibNoMultisampling:1;
    unsigned int _allowsBrowsing:1;
    unsigned int _isOpaque:1;
    unsigned int _firstDrawDone:1;
    unsigned int _appIsDeactivated:1;
    unsigned int _viewIsOffscreen:1;
    id _delegate;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *__displayLink;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    UIColor *_backgroundColor;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    SCNEventHandler *_eventHandler;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
    NSArray *_controllerGestureRecognizers;
}

+ (Class)layerClass;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
+ (id)SCNJSExportProtocol;
- (void)_enterBackground:(id)arg1;
- (void)_flushDisplayLink;
- (void)_enterForeground:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)resumeDisplayLink;
- (void)pauseDisplayLink;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_updateGestureRecognizers;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
@property(retain, nonatomic) EAGLContext *eaglContext;
- (void)set_ibWantsMultisampling:(_Bool)arg1;
- (_Bool)_ibWantsMultisampling;
- (void)set_ibSceneName:(id)arg1;
- (id)_ibSceneName;
@property(nonatomic) unsigned long long antialiasingMode;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(_Bool)arg1;
- (_Bool)_showsAuthoringEnvironment;
- (void)switchToNextCamera;
- (void)switchToCameraNamed:(id)arg1;
@property(readonly, copy) NSString *description;
- (void *)__CFObject;
- (void)unlock;
- (void)lock;
- (struct UIImage *)snapshot;
@property(nonatomic) _Bool showsStatistics;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_setNeedsDisplay;
@property(nonatomic) long long preferredFramesPerSecond;
- (id)_displayLink;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
@property(retain, nonatomic) SKScene *overlaySKScene;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *context;
@property(nonatomic) _Bool autoenablesDefaultLighting;
@property(nonatomic) double sceneTime;
- (_Bool)isOpaque;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)eventHandlerWantsRedraw;
- (void)setEventHandler:(id)arg1;
- (id)eventHandler;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (_Bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (double)_flipY:(double)arg1;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(getter=isPlaying) _Bool playing;
@property(nonatomic) _Bool loops;
@property(nonatomic) _Bool allowsCameraControl;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)setPointOfView:(id)arg1 animate:(_Bool)arg2;
- (void)_drawAtTime:(double)arg1;
- (_Bool)_canJitter;
- (_Bool)_supportsJiterringSyncRedraw;
- (void)_jitterRedisplay;
@property(nonatomic, getter=isJitteringEnabled) _Bool jitteringEnabled;
- (id)renderer;
@property(retain, nonatomic) SCNScene *scene;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
