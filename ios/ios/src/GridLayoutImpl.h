//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-ios-widgets\IOSAndroidXGridlayoutPlugin\src\main\java\com\ashera\gridlayout\GridLayoutImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_GridLayoutImpl")
#ifdef RESTRICT_GridLayoutImpl
#define INCLUDE_ALL_GridLayoutImpl 0
#else
#define INCLUDE_ALL_GridLayoutImpl 1
#endif
#undef RESTRICT_GridLayoutImpl

#if !defined (ASGridLayoutImpl_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl))
#define ASGridLayoutImpl_

#define RESTRICT_BaseHasWidgets 1
#define INCLUDE_ASBaseHasWidgets 1
#include "BaseHasWidgets.h"

@class ADXGridLayout_Alignment;
@class ADXGridLayout_Spec;
@class ASGridLayoutImpl_GridLayoutBean;
@class ASGridLayoutImpl_GridLayoutCommandBuilder;
@class ASGridLayoutImpl_GridLayoutCommandParamsBuilder;
@class ASGridLayoutImpl_GridLayoutParamsBean;
@class ASWidgetAttribute;
@class ASWidgetAttributeMap;
@protocol ASIFragment;
@protocol ASILifeCycleDecorator;
@protocol ASIWidget;
@protocol JavaUtilMap;

@interface ASGridLayoutImpl : ASBaseHasWidgets
@property id uiView;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)localname;

- (instancetype)initWithNSString:(NSString *)groupName
                    withNSString:(NSString *)localname;

- (void)addWithASIWidget:(id<ASIWidget>)w
                 withInt:(jint)index;

- (id)asNativeWidget;

- (id)asWidget;

- (jboolean)checkIosVersionWithNSString:(NSString *)v;

- (jint)convertStringTointWithNSString:(NSString *)str;

- (void)createWithASIFragment:(id<ASIFragment>)fragment
              withJavaUtilMap:(id<JavaUtilMap>)params;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
              withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (ASGridLayoutImpl_GridLayoutBean *)getBean;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)getBuilder;

- (id)getChildAttributeWithASIWidget:(id<ASIWidget>)w
               withASWidgetAttribute:(ASWidgetAttribute *)key;

- (ASGridLayoutImpl_GridLayoutParamsBean *)getParamsBean;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)getParamsBuilder;

- (id)getPluginWithNSString:(NSString *)plugin;

- (ADXGridLayout_Spec *)getSpecWithASIWidget:(id<ASIWidget>)w
                    withASWidgetAttributeMap:(ASWidgetAttributeMap *)attributes
                                withNSString:(NSString *)columnRow;

- (ADXGridLayout_Spec *)getSpecWithNSString:(NSString *)str;

- (void)invalidate;

- (void)loadAttributesWithNSString:(NSString *)localName;

- (void)nativeCreateWithJavaUtilMap:(id<JavaUtilMap>)params;

- (id<ASIWidget>)newInstance OBJC_METHOD_FAMILY_NONE;

- (jboolean)removeWithInt:(jint)index;

- (jboolean)removeWithASIWidget:(id<ASIWidget>)w;

- (void)requestLayout;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue
                withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (void)setChildAttributeWithASIWidget:(id<ASIWidget>)w
                 withASWidgetAttribute:(ASWidgetAttribute *)key
                          withNSString:(NSString *)strValue
                                withId:(id)objValue;

- (void)setIdWithNSString:(NSString *)id_;

- (void)updateMeasuredDimensionWithInt:(jint)width
                               withInt:(jint)height;

#pragma mark Package-Private

- (ADXGridLayout_Alignment *)getAlignmentWithInt:(jint)gravity
                                     withBoolean:(jboolean)horizontal;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl)

inline NSString *ASGridLayoutImpl_get_LOCAL_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASGridLayoutImpl_LOCAL_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASGridLayoutImpl, LOCAL_NAME, NSString *)

inline NSString *ASGridLayoutImpl_get_GROUP_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASGridLayoutImpl_GROUP_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASGridLayoutImpl, GROUP_NAME, NSString *)

inline jint ASGridLayoutImpl_get_UNDEFINED(void);
#define ASGridLayoutImpl_UNDEFINED ((jint) 0x80000000)
J2OBJC_STATIC_FIELD_CONSTANT(ASGridLayoutImpl, UNDEFINED, jint)

inline jint ASGridLayoutImpl_get_DEFAULT_COLUMN(void);
#define ASGridLayoutImpl_DEFAULT_COLUMN ((jint) 0x80000000)
J2OBJC_STATIC_FIELD_CONSTANT(ASGridLayoutImpl, DEFAULT_COLUMN, jint)

inline jint ASGridLayoutImpl_get_DEFAULT_SPAN_SIZE(void);
#define ASGridLayoutImpl_DEFAULT_SPAN_SIZE 1
J2OBJC_STATIC_FIELD_CONSTANT(ASGridLayoutImpl, DEFAULT_SPAN_SIZE, jint)

inline jfloat ASGridLayoutImpl_get_DEFAULT_WEIGHT(void);
#define ASGridLayoutImpl_DEFAULT_WEIGHT 0.0f
J2OBJC_STATIC_FIELD_CONSTANT(ASGridLayoutImpl, DEFAULT_WEIGHT, jfloat)

inline jint ASGridLayoutImpl_get_DEFAULT_GRAVITY(void);
#define ASGridLayoutImpl_DEFAULT_GRAVITY 0
J2OBJC_STATIC_FIELD_CONSTANT(ASGridLayoutImpl, DEFAULT_GRAVITY, jint)

FOUNDATION_EXPORT void ASGridLayoutImpl_init(ASGridLayoutImpl *self);

FOUNDATION_EXPORT ASGridLayoutImpl *new_ASGridLayoutImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl *create_ASGridLayoutImpl_init(void);

FOUNDATION_EXPORT void ASGridLayoutImpl_initWithNSString_(ASGridLayoutImpl *self, NSString *localname);

FOUNDATION_EXPORT ASGridLayoutImpl *new_ASGridLayoutImpl_initWithNSString_(NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl *create_ASGridLayoutImpl_initWithNSString_(NSString *localname);

FOUNDATION_EXPORT void ASGridLayoutImpl_initWithNSString_withNSString_(ASGridLayoutImpl *self, NSString *groupName, NSString *localname);

FOUNDATION_EXPORT ASGridLayoutImpl *new_ASGridLayoutImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl *create_ASGridLayoutImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl)

@compatibility_alias ComAsheraGridlayoutGridLayoutImpl ASGridLayoutImpl;

#endif

#if !defined (ASGridLayoutImpl_AlignmentMode_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_AlignmentMode))
#define ASGridLayoutImpl_AlignmentMode_

#define RESTRICT_AbstractEnumToIntConverter 1
#define INCLUDE_ASAbstractEnumToIntConverter 1
#include "AbstractEnumToIntConverter.h"

@class JavaLangInteger;
@protocol JavaUtilMap;

@interface ASGridLayoutImpl_AlignmentMode : ASAbstractEnumToIntConverter

#pragma mark Public

- (JavaLangInteger *)getDefault;

- (id<JavaUtilMap>)getMapping;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_AlignmentMode)

FOUNDATION_EXPORT void ASGridLayoutImpl_AlignmentMode_init(ASGridLayoutImpl_AlignmentMode *self);

FOUNDATION_EXPORT ASGridLayoutImpl_AlignmentMode *new_ASGridLayoutImpl_AlignmentMode_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_AlignmentMode *create_ASGridLayoutImpl_AlignmentMode_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_AlignmentMode)

#endif

#if !defined (ASGridLayoutImpl_Orientation_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_Orientation))
#define ASGridLayoutImpl_Orientation_

#define RESTRICT_AbstractEnumToIntConverter 1
#define INCLUDE_ASAbstractEnumToIntConverter 1
#include "AbstractEnumToIntConverter.h"

@class JavaLangInteger;
@protocol JavaUtilMap;

@interface ASGridLayoutImpl_Orientation : ASAbstractEnumToIntConverter

#pragma mark Public

- (JavaLangInteger *)getDefault;

- (id<JavaUtilMap>)getMapping;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_Orientation)

FOUNDATION_EXPORT void ASGridLayoutImpl_Orientation_init(ASGridLayoutImpl_Orientation *self);

FOUNDATION_EXPORT ASGridLayoutImpl_Orientation *new_ASGridLayoutImpl_Orientation_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_Orientation *create_ASGridLayoutImpl_Orientation_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_Orientation)

#endif

#if !defined (ASGridLayoutImpl_GridLayoutExt_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_GridLayoutExt))
#define ASGridLayoutImpl_GridLayoutExt_

#define RESTRICT_GridLayout 1
#define INCLUDE_ADXGridLayout 1
#include "GridLayout.h"

#define RESTRICT_ILifeCycleDecorator 1
#define INCLUDE_ASILifeCycleDecorator 1
#include "ILifeCycleDecorator.h"

#define RESTRICT_IMaxDimension 1
#define INCLUDE_ASIMaxDimension 1
#include "IMaxDimension.h"

@class ASGridLayoutImpl;
@class ASWidgetAttribute;
@class IOSObjectArray;
@protocol ASIWidget;
@protocol JavaUtilList;

@interface ASGridLayoutImpl_GridLayoutExt : ADXGridLayout < ASILifeCycleDecorator, ASIMaxDimension >

#pragma mark Public

- (instancetype)initWithASGridLayoutImpl:(ASGridLayoutImpl *)outer$;

- (void)drawableStateChanged;

- (void)executeWithNSString:(NSString *)method
          withNSObjectArray:(IOSObjectArray *)canvas;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute;

- (jint)getMaxHeight;

- (jint)getMaxWidth;

- (id<JavaUtilList>)getMethods;

- (void)initialized OBJC_METHOD_FAMILY_NONE;

- (id<ASILifeCycleDecorator>)newInstanceWithASIWidget:(id<ASIWidget>)widget OBJC_METHOD_FAMILY_NONE;

- (void)offsetLeftAndRightWithInt:(jint)offset;

- (void)offsetTopAndBottomWithInt:(jint)offset;

- (void)onMeasureWithInt:(jint)widthMeasureSpec
                 withInt:(jint)heightMeasureSpec;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue;

- (void)setMaxHeightWithInt:(jint)height;

- (void)setMaxWidthWithInt:(jint)width;

- (void)setVisibilityWithInt:(jint)visibility;

- (void)updateMeasuredDimensionWithInt:(jint)width
                               withInt:(jint)height;

#pragma mark Protected

- (void)onLayoutWithBoolean:(jboolean)changed
                    withInt:(jint)l
                    withInt:(jint)t
                    withInt:(jint)r
                    withInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_GridLayoutExt)

FOUNDATION_EXPORT void ASGridLayoutImpl_GridLayoutExt_initWithASGridLayoutImpl_(ASGridLayoutImpl_GridLayoutExt *self, ASGridLayoutImpl *outer$);

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutExt *new_ASGridLayoutImpl_GridLayoutExt_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutExt *create_ASGridLayoutImpl_GridLayoutExt_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_GridLayoutExt)

#endif

#if !defined (ASGridLayoutImpl_GridLayoutCommandBuilder_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_GridLayoutCommandBuilder))
#define ASGridLayoutImpl_GridLayoutCommandBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandBuilder 1
#include "ViewGroupImpl.h"

@class ASGridLayoutImpl;

@interface ASGridLayoutImpl_GridLayoutCommandBuilder : ASViewGroupImpl_ViewGroupCommandBuilder

#pragma mark Public

- (instancetype)initWithASGridLayoutImpl:(ASGridLayoutImpl *)outer$;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)addAllModelWithId:(id)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)addModelByIndexWithId:(id)arg0
                                                              withId:(id)arg1;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)addModelWithId:(id)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)executeWithBoolean:(jboolean)setter;

- (id)getAlignmentMode;

- (id)getColumnCount;

- (id)getOrientation;

- (id)getRowCount;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)invalidate;

- (id)isColumnOrderPreserved;

- (id)isRowOrderPreserved;

- (id)isUseDefaultMargins;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)notifyDataSetChangedWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)refreshUiFromModelWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)removeModelAtIndexWithInt:(jint)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)removeModelByIdWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)requestLayout;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)reset;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setAddStatesFromChildrenWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setAlignmentModeWithNSString:(NSString *)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setAlphaWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setAsDragSourceWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setAttributeUnderTestWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setBackgroundRepeatWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setBackgroundTintModeWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setBackgroundTintWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setBackgroundWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setClickableWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setClipChildrenWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setClipToPaddingWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setColumnCountWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setColumnOrderPreservedWithBoolean:(jboolean)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setContentDescriptionWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setCustomErrorMessageKeysWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setCustomErrorMessageValuesWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setDuplicateParentStateWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setEnabledWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setErrorStyleWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setFocusableWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setForegroundGravityWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setForegroundRepeatWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setForegroundTintModeWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setForegroundTintWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setForegroundWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIdWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setInvalidateOnFrameChangeWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAccessibilityHintWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAccessibilityIgnoresInvertColorsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAccessibilityLabelWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAccessibilityTraitsWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAccessibilityValueWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAlphaWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosAutoresizesSubviewsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosBackgroundColorWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosClearsContextBeforeDrawingWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosClipsToBoundsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosContentScaleFactorWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosInsetsLayoutMarginsFromSafeAreaWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsAccessibilityElementWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsExclusiveTouchWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsHiddenWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsMultipleTouchEnabledWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsOpaqueWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosIsUserInteractionEnabledWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLargeContentImageWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLargeContentTitleWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLayerBorderColorWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLayerBorderWidthWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLayerCornerRadiusWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosLayerMasksToBoundsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosPreservesSuperviewLayoutMarginsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosRestorationIdentifierWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosScalesLargeContentImageWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosShowsLargeContentViewerWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosTagWithInt:(jint)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosTintColorWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setIosTranslatesAutoresizingMaskIntoConstraintsWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setKeepScreenOnWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setLayoutDirectionWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setLayoutModeWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setListitemWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setLongClickableWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setMaxHeightWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setMaxWidthWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setMinHeightWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setMinWidthWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelForWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelIdPathWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelParamWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelPojoToUiParamsWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelPojoToUiWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelSyncEventsWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelUiToPojoEventIdsWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setModelUiToPojoWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnChildViewAddedWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnChildViewRemovedWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnClickWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnDragWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnKeyWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnLongClickWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOnTouchWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setOrientationWithNSString:(NSString *)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingBottomWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingEndWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingHorizontalWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingLeftWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingRightWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingStartWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingTopWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingVerticalWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setPaddingWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setRotationWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setRotationXWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setRotationYWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setRowCountWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setRowOrderPreservedWithBoolean:(jboolean)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setScaleXWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setScaleYWithFloat:(jfloat)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setSelectedWithBoolean:(jboolean)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setStyleWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTextAlignmentWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTextDirectionWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTransformPivotXWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTransformPivotYWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTranslationXWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTranslationYWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setTranslationZWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setUseDefaultMarginsWithBoolean:(jboolean)value;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_maxlengthWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_maxWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_minlengthWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_minWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_patternWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_requiredWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setV_typeWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setValidationErrorDisplayTypeWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setValidationWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setVisibilityWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)setZIndexWithInt:(jint)arg0;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetAddStatesFromChildren;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetAlignmentMode;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetAlpha;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetBackground;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetBackgroundTint;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetBackgroundTintMode;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetClickable;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetClipChildren;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetClipToPadding;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetColumnCount;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetColumnOrderPreserved;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetContentDescription;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetDuplicateParentState;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetEnabled;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetFocusable;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetForeground;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetForegroundGravity;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetForegroundTint;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetForegroundTintMode;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetId;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAccessibilityHint;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAccessibilityIgnoresInvertColors;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAccessibilityLabel;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAccessibilityTraits;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAccessibilityValue;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAlpha;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosAutoresizesSubviews;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosBackgroundColor;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosClearsContextBeforeDrawing;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosClipsToBounds;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosContentScaleFactor;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosInsetsLayoutMarginsFromSafeArea;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsAccessibilityElement;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsExclusiveTouch;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsFocused;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsHidden;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsMultipleTouchEnabled;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsOpaque;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosIsUserInteractionEnabled;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosLargeContentImage;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosLargeContentTitle;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosPreservesSuperviewLayoutMargins;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosRestorationIdentifier;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosScalesLargeContentImage;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosShowsLargeContentViewer;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosTag;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosTintColor;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetIosTranslatesAutoresizingMaskIntoConstraints;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetKeepScreenOn;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetLayoutDirection;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetLayoutMode;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetLongClickable;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetMaxHeight;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetMaxWidth;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetMinHeight;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetMinWidth;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetModelIdPath;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetModelParam;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetModelPojoToUi;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetModelSyncEvents;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetModelUiToPojo;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetOrientation;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingBottom;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingEnd;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingLeft;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingRight;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingStart;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetPaddingTop;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetRotation;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetRotationX;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetRotationY;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetRowCount;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetRowOrderPreserved;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetScaleX;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetScaleY;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetSelected;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTextAlignment;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTextDirection;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTransformPivotX;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTransformPivotY;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTranslationX;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTranslationY;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetTranslationZ;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetUseDefaultMargins;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetValidateForm;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)tryGetVisibility;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)updateModelDataWithNSString:(NSString *)arg0
                                                                    withId:(id)arg1;

- (ASGridLayoutImpl_GridLayoutCommandBuilder *)validateFormWithNSString:(NSString *)arg0;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_GridLayoutCommandBuilder)

FOUNDATION_EXPORT void ASGridLayoutImpl_GridLayoutCommandBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl_GridLayoutCommandBuilder *self, ASGridLayoutImpl *outer$);

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutCommandBuilder *new_ASGridLayoutImpl_GridLayoutCommandBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutCommandBuilder *create_ASGridLayoutImpl_GridLayoutCommandBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_GridLayoutCommandBuilder)

#endif

#if !defined (ASGridLayoutImpl_GridLayoutBean_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_GridLayoutBean))
#define ASGridLayoutImpl_GridLayoutBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupBean 1
#include "ViewGroupImpl.h"

@class ASGridLayoutImpl;
@protocol ASIWidget;

@interface ASGridLayoutImpl_GridLayoutBean : ASViewGroupImpl_ViewGroupBean

#pragma mark Public

- (instancetype)initWithASGridLayoutImpl:(ASGridLayoutImpl *)outer$;

- (id)getAlignmentMode;

- (id)getColumnCount;

- (id)getOrientation;

- (id)getRowCount;

- (id)isColumnOrderPreserved;

- (id)isRowOrderPreserved;

- (id)isUseDefaultMargins;

- (void)setAlignmentModeWithNSString:(NSString *)value;

- (void)setColumnCountWithInt:(jint)value;

- (void)setColumnOrderPreservedWithBoolean:(jboolean)value;

- (void)setOrientationWithNSString:(NSString *)value;

- (void)setRowCountWithInt:(jint)value;

- (void)setRowOrderPreservedWithBoolean:(jboolean)value;

- (void)setUseDefaultMarginsWithBoolean:(jboolean)value;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithASIWidget:(id<ASIWidget>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_GridLayoutBean)

FOUNDATION_EXPORT void ASGridLayoutImpl_GridLayoutBean_initWithASGridLayoutImpl_(ASGridLayoutImpl_GridLayoutBean *self, ASGridLayoutImpl *outer$);

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutBean *new_ASGridLayoutImpl_GridLayoutBean_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutBean *create_ASGridLayoutImpl_GridLayoutBean_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_GridLayoutBean)

#endif

#if !defined (ASGridLayoutImpl_GridLayoutParamsBean_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_GridLayoutParamsBean))
#define ASGridLayoutImpl_GridLayoutParamsBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupParamsBean 1
#include "ViewGroupImpl.h"

@class ASGridLayoutImpl;
@protocol ASIWidget;

@interface ASGridLayoutImpl_GridLayoutParamsBean : ASViewGroupImpl_ViewGroupParamsBean

#pragma mark Public

- (instancetype)initWithASGridLayoutImpl:(ASGridLayoutImpl *)outer$;

- (void)setLayoutColumnWithASIWidget:(id<ASIWidget>)w
                             withInt:(jint)value;

- (void)setLayoutColumnSpanWithASIWidget:(id<ASIWidget>)w
                                 withInt:(jint)value;

- (void)setLayoutColumnWeightWithASIWidget:(id<ASIWidget>)w
                                   withInt:(jint)value;

- (void)setLayoutGravityWithASIWidget:(id<ASIWidget>)w
                         withNSString:(NSString *)value;

- (void)setLayoutRowWithASIWidget:(id<ASIWidget>)w
                          withInt:(jint)value;

- (void)setLayoutRowSpanWithASIWidget:(id<ASIWidget>)w
                              withInt:(jint)value;

- (void)setLayoutRowWeightWithASIWidget:(id<ASIWidget>)w
                                withInt:(jint)value;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_GridLayoutParamsBean)

FOUNDATION_EXPORT void ASGridLayoutImpl_GridLayoutParamsBean_initWithASGridLayoutImpl_(ASGridLayoutImpl_GridLayoutParamsBean *self, ASGridLayoutImpl *outer$);

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutParamsBean *new_ASGridLayoutImpl_GridLayoutParamsBean_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutParamsBean *create_ASGridLayoutImpl_GridLayoutParamsBean_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_GridLayoutParamsBean)

#endif

#if !defined (ASGridLayoutImpl_GridLayoutCommandParamsBuilder_) && (INCLUDE_ALL_GridLayoutImpl || defined(INCLUDE_ASGridLayoutImpl_GridLayoutCommandParamsBuilder))
#define ASGridLayoutImpl_GridLayoutCommandParamsBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandParamsBuilder 1
#include "ViewGroupImpl.h"

@class ASGridLayoutImpl;

@interface ASGridLayoutImpl_GridLayoutCommandParamsBuilder : ASViewGroupImpl_ViewGroupCommandParamsBuilder

#pragma mark Public

- (instancetype)initWithASGridLayoutImpl:(ASGridLayoutImpl *)outer$;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)reset;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutColumnWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutColumnSpanWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutColumnWeightWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutGravityWithNSString:(NSString *)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginBottomWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginEndWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginHorizontalWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginLeftWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginRightWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginStartWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginTopWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginVerticalWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutMarginWithNSString:(NSString *)arg0;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutRowWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutRowSpanWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)setLayoutRowWeightWithInt:(jint)value;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginBottom;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginEnd;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginLeft;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginRight;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginStart;

- (ASGridLayoutImpl_GridLayoutCommandParamsBuilder *)tryGetLayoutMarginTop;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASGridLayoutImpl_GridLayoutCommandParamsBuilder)

FOUNDATION_EXPORT void ASGridLayoutImpl_GridLayoutCommandParamsBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl_GridLayoutCommandParamsBuilder *self, ASGridLayoutImpl *outer$);

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutCommandParamsBuilder *new_ASGridLayoutImpl_GridLayoutCommandParamsBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASGridLayoutImpl_GridLayoutCommandParamsBuilder *create_ASGridLayoutImpl_GridLayoutCommandParamsBuilder_initWithASGridLayoutImpl_(ASGridLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASGridLayoutImpl_GridLayoutCommandParamsBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_GridLayoutImpl")