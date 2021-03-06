//
//  DataManager.h
//  OrderNow
//
//  Created by Leonardo Geus on 07/04/15.
//  Copyright (c) 2015 Leonardo Geus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataManager : NSObject

@property NSMutableDictionary *dict;

+(id)getDataManager;
-(NSMutableDictionary *)LoadJsonDictionaryFromFile:(NSString *)nomeArquivo;
-(NSMutableArray *)LoadJsonArrayFromFile:(NSString *)nomeArquivo;


@end
