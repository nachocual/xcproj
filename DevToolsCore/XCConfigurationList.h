#import "PBXFileReference.h"
#import "XCBuildConfiguration.h"

@protocol XCConfigurationList <NSObject>

- (NSArray<XCBuildConfiguration> *) buildConfigurations;

- (id)buildSettingDictionariesForConfigurationName:(id)arg1 errors:(id *)arg2;

@end
