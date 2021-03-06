//
// cocos2d performance particle test
// Based on the test by Valentin Milea
//

#import "cocos2d.h"

Class nextAction();

@class CCProfilingTimer;

enum {
	kMaxNodes = 15000,
	kNodesIncrease = 500,
};

@interface MainScene : CCScene {
	int			lastRenderedCount;
	int			quantityOfNodes;
	int			currentQuantityOfNodes;
	
}

+(id) testWithQuantityOfNodes:(unsigned int)nodes;
-(id) initWithQuantityOfNodes:(unsigned int)nodes;
-(NSString*) title;
-(NSString*) subtitle;

-(void) onIncrease:(id) sender;
-(void) onDecrease:(id) sender;

-(void) updateQuantityLabel;
-(void) updateQuantityOfNodes;

@end

@interface IterateSpriteSheet : MainScene
{
	CCSpriteSheet	*spritesheet;
	CCProfilingTimer* _profilingTimer;
}
-(NSString*) profilerName;
@end

@interface IterateSpriteSheetFastEnum : IterateSpriteSheet
{}
@end

@interface IterateSpriteSheetCArray : IterateSpriteSheet
{}
@end

@interface AddRemoveSpriteSheet : MainScene
{
	CCSpriteSheet	*spritesheet;
	CCProfilingTimer* _profilingTimer;
}
-(NSString*) profilerName;
@end

@interface AddSpriteSheet : AddRemoveSpriteSheet
{}
@end

@interface RemoveSpriteSheet : AddRemoveSpriteSheet
{}
@end



