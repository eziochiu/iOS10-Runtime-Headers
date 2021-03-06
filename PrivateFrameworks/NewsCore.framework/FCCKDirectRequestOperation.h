/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDirectRequestOperation : FCOperation {
    NSString * _containerName;
    id /* block */  _criticalNodeFailureTest;
    FCNetworkEvent * _networkEvent;
    bool  _operationFailsOnRequestFailure;
    bool  _production;
    id /* block */  _requestCompletionHandler;
    long long  _requestType;
    NSString * _requestUUID;
    NSArray * _requests;
    NSError * _resultError;
    NSMutableDictionary * _resultErrorsByRequestID;
    NSMutableArray * _resultResponses;
    double  _timeoutIntervalForRequest;
}

@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) id /* block */ criticalNodeFailureTest;
@property (nonatomic, retain) FCNetworkEvent *networkEvent;
@property (nonatomic) bool operationFailsOnRequestFailure;
@property (nonatomic) bool production;
@property (nonatomic, copy) id /* block */ requestCompletionHandler;
@property (nonatomic) long long requestType;
@property (nonatomic, copy) NSString *requestUUID;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSMutableDictionary *resultErrorsByRequestID;
@property (nonatomic, retain) NSMutableArray *resultResponses;
@property (nonatomic) double timeoutIntervalForRequest;

+ (id)URLSession;

- (void).cxx_destruct;
- (id)_errorFromHTTPResponse:(id)arg1;
- (id)_errorFromOperationResultError:(id)arg1;
- (id)_mmeClientInfo;
- (void)_processResponseData:(id)arg1;
- (id)_requestBodyData;
- (id)_requestHeadersWithBaseURL:(id)arg1;
- (id)containerName;
- (id /* block */)criticalNodeFailureTest;
- (id)generateHTTPRequest;
- (id)init;
- (id)networkEvent;
- (bool)operationFailsOnRequestFailure;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (bool)production;
- (id /* block */)requestCompletionHandler;
- (long long)requestType;
- (id)requestUUID;
- (id)requests;
- (id)resultError;
- (id)resultErrorsByRequestID;
- (id)resultResponses;
- (void)setContainerName:(id)arg1;
- (void)setCriticalNodeFailureTest:(id /* block */)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setOperationFailsOnRequestFailure:(bool)arg1;
- (void)setProduction:(bool)arg1;
- (void)setRequestCompletionHandler:(id /* block */)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultErrorsByRequestID:(id)arg1;
- (void)setResultResponses:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (double)timeoutIntervalForRequest;
- (bool)validateOperation;

@end
