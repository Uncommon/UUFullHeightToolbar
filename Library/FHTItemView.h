#import <Cocoa/Cocoa.h>

@interface FHTItemView : NSView

+ (void)customizeToolbarItem:(NSToolbarItem *)item
                isFullHeight:(BOOL)isFullHeight;

@property(weak) NSToolbarItem *toolbarItem;

@end
