/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface CStat : PBCodable <NSCopying> {
    unsigned int  _activeDurMs;
    struct { 
        unsigned int activeDurMs : 1; 
        unsigned int ident : 1; 
        unsigned int idleDurMs : 1; 
        unsigned int sleepDurMs : 1; 
        unsigned int sleepEntryCount : 1; 
    }  _has;
    unsigned int  _ident;
    unsigned int  _idleDurMs;
    unsigned int  _sleepDurMs;
    unsigned int  _sleepEntryCount;
}

@property (nonatomic) unsigned int activeDurMs;
@property (nonatomic) BOOL hasActiveDurMs;
@property (nonatomic) BOOL hasIdent;
@property (nonatomic) BOOL hasIdleDurMs;
@property (nonatomic) BOOL hasSleepDurMs;
@property (nonatomic) BOOL hasSleepEntryCount;
@property (nonatomic) unsigned int ident;
@property (nonatomic) unsigned int idleDurMs;
@property (nonatomic) unsigned int sleepDurMs;
@property (nonatomic) unsigned int sleepEntryCount;

- (unsigned int)activeDurMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActiveDurMs;
- (BOOL)hasIdent;
- (BOOL)hasIdleDurMs;
- (BOOL)hasSleepDurMs;
- (BOOL)hasSleepEntryCount;
- (unsigned int)hash;
- (unsigned int)ident;
- (unsigned int)idleDurMs;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setActiveDurMs:(unsigned int)arg1;
- (void)setHasActiveDurMs:(BOOL)arg1;
- (void)setHasIdent:(BOOL)arg1;
- (void)setHasIdleDurMs:(BOOL)arg1;
- (void)setHasSleepDurMs:(BOOL)arg1;
- (void)setHasSleepEntryCount:(BOOL)arg1;
- (void)setIdent:(unsigned int)arg1;
- (void)setIdleDurMs:(unsigned int)arg1;
- (void)setSleepDurMs:(unsigned int)arg1;
- (void)setSleepEntryCount:(unsigned int)arg1;
- (unsigned int)sleepDurMs;
- (unsigned int)sleepEntryCount;
- (void)writeTo:(id)arg1;

@end