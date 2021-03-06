//
//  CircloAudioPlayer.h
//  Circlo
//
//  Created by Johan Halin on 8.11.2015.
//  Copyright © 2015 Aero Deko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CircloAudioPlayer : NSObject

+ (instancetype)sharedPlayer;
- (void)loadSound:(NSString *)filename multitrack:(BOOL)multitrack;
- (void)playSound:(NSString *)filename loop:(BOOL)loop;
- (void)stopSound:(NSString *)filename;
- (void)setVolume:(float)volume forSound:(NSString *)filename;

@end
