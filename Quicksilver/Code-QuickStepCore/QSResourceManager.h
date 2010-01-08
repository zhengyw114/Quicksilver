



#import <Foundation/Foundation.h>

#define USE_NEW_URL_ICON_DRAWING_CODE 1

extern id QSRez;

@interface QSResourceManager : NSObject {
	NSMutableDictionary *resourceDict;
	NSString *resourceOverrideFolder;
	NSDictionary *resourceOverrideList;
}
+ (void)initialize;
+ (id)sharedInstance;
+ (NSImage *)imageNamed:(NSString *)name;

+ (NSImage *)imageNamed:(NSString *)name inBundle:(NSBundle *)bundle;
- (NSImage *)imageNamed:(NSString *)name;
- (NSImage *)imageWithLocatorInformation:(id)locator;

- (void)addResourcesFromDictionary:(NSDictionary *)dict;
- (NSString *)pathWithLocatorInformation:(id)locator;
- (NSImage *)imageWithExactName:(NSString *)name;
//- (NSImage *)daedalusImage;

- (NSString *)pathForImageNamed:(NSString *)name;
@end
