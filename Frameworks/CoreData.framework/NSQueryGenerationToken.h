/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSQueryGenerationToken : NSObject <NSCopying>

+ (id)currentQueryGenerationToken;
+ (void)initialize;
+ (id)nostoresQueryGenerationToken;
+ (id)unpinnedQueryGenerationToken;

- (id)_generationalComponentForStore:(id)arg1;
- (id)_storesForRequestRoutingFrom:(id)arg1;
- (id)_token;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;

@end
