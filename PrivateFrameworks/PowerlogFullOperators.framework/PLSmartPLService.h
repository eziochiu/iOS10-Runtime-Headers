/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLSmartPLService : PLService {
    NSMutableDictionary * _smartPLHelpers;
}

@property (retain) NSMutableDictionary *smartPLHelpers;

+ (id)defaults;
+ (id)entryEventPointDefinitionSample;
+ (id)entryEventPointDefinitionSmartTrigger;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)logEventPointHeap;
- (void)logEventPointHeapForProcessName:(id)arg1;
- (void)logEventPointSample;
- (void)logEventPointSampleForProcessName:(id)arg1;
- (void)logEventPointSmartPLFiredFromAuxilary:(Class)arg1 withReason:(id)arg2;
- (void)logEventPointStackShot;
- (void)logEventPointStackShotWithReason:(id)arg1;
- (void)logEventPointVMMap;
- (void)logEventPointVMMapForProcessName:(id)arg1;
- (void)setSmartPLHelpers:(id)arg1;
- (id)smartPLHelpers;
- (void)vmmapProcessName:(id)arg1;

@end
