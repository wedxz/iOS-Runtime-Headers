/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorder : NSObject <CPCopying, NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  bounds;
    NSMutableArray * graphicObjects;
    BOOL  hasBackwardVector;
    BOOL  hasForwardVector;
    NSMutableArray * intersections;
    BOOL  isHorizontal;
    NSMutableArray * neighbors;
    float  overhangMax;
    float  overhangMin;
    NSMutableArray * ownerArray;
    CPPage * page;
}

+ (void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extendRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)outerVertices:(struct CGPoint { float x1; float x2; }*)arg1 fromBorders:(id)arg2 swollenBy:(float)arg3;
+ (void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2;

- (void)addGraphicObject:(id)arg1;
- (void)addNeighbor:(id)arg1;
- (void)addToArray:(id)arg1;
- (void)addToArray:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)combine:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (BOOL)continues:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutIntersections;
- (BOOL)crosses:(id)arg1;
- (void)dealloc;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned int)arg3;
- (BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned int)arg3 returningTo:(id)arg4 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)getNextBorder:(unsigned int)arg1;
- (id)graphicObjectAtIndex:(unsigned int)arg1;
- (unsigned int)graphicObjectCount;
- (id)graphicObjects;
- (BOOL)hasBackwardVector;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg1 startingForward:(BOOL)arg2;
- (BOOL)hasForwardVector;
- (BOOL)hasNeighborShape:(id)arg1;
- (BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2;
- (BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned int*)arg2;
- (unsigned int)indexOfIntersectionWith:(id)arg1;
- (id)init;
- (id)initSuper;
- (id)initWithGraphicObject:(id)arg1;
- (void)instantiateVectors;
- (unsigned int)intersectionCount;
- (BOOL)intersectsWith:(id)arg1 atRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (BOOL)isHorizontal;
- (BOOL)isVertical;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborCount;
- (id)ownerArray;
- (id)page;
- (void)removeFromArray;
- (void)removeFromArrayAtIndex:(unsigned int)arg1;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg1;
- (void)removeLooseThreadsStartingFrom:(id)arg1;
- (void)removeNeighborAtIndex:(unsigned int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasBackwardVector:(BOOL)arg1;
- (void)setHasForwardVector:(BOOL)arg1;
- (void)setSide:(int)arg1 ofPage:(id)arg2;
- (void)trimToLastIntersections;
- (BOOL)windsClockwiseOnto:(id)arg1;
- (long)zOrder;

@end
