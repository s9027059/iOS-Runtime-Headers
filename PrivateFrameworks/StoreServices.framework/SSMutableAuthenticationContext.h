/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSString, NSDictionary, NSNumber;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying> {
}

@property(copy) NSDictionary * HTTPHeaders;
@property(copy) NSString * accountName;
@property(getter=isAccountNameEditable) BOOL accountNameEditable;
@property int accountScope;
@property BOOL allowsRetry;
@property BOOL canCreateNewAccount;
@property BOOL canSetActiveAccount;
@property(copy) NSString * clientIdentifierHeader;
@property(getter=isDemoAccount) BOOL demoAccount;
@property(copy) NSString * initialPassword;
@property(copy) NSString * preferredITunesStoreClient;
@property int promptStyle;
@property(copy) NSDictionary * requestParameters;
@property(retain) NSNumber * requiredUniqueIdentifier;
@property BOOL shouldFollowAccountButtons;
@property BOOL shouldIgnoreProtocol;
@property BOOL shouldSuppressDialogs;
@property(copy) NSDictionary * signupRequestParameters;
@property int tokenType;
@property(copy) NSArray * userAgentComponents;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setAllowsRetry:(BOOL)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setCanSetActiveAccount:(BOOL)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(int)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setShouldIgnoreProtocol:(BOOL)arg1;
- (void)setShouldSuppressDialogs:(BOOL)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(int)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

@end