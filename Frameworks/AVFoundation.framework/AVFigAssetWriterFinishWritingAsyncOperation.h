/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (void)didEnterTerminalState;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)finalize;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1;
- (BOOL)isAsynchronous;
- (void)start;

@end
