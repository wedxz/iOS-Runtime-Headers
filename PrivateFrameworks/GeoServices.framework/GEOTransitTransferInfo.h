/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitTransferInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int transferMuid : 1; 
        unsigned int transferTime : 1; 
    }  _has;
    unsigned long long  _transferMuid;
    unsigned int  _transferTime;
}

@property (nonatomic) BOOL hasTransferMuid;
@property (nonatomic) BOOL hasTransferTime;
@property (nonatomic) unsigned long long transferMuid;
@property (nonatomic) unsigned int transferTime;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTransferMuid;
- (BOOL)hasTransferTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTransferMuid:(BOOL)arg1;
- (void)setHasTransferTime:(BOOL)arg1;
- (void)setTransferMuid:(unsigned long long)arg1;
- (void)setTransferTime:(unsigned int)arg1;
- (unsigned long long)transferMuid;
- (unsigned int)transferTime;
- (void)writeTo:(id)arg1;

@end
