//
//  GameBoardView.h
//  Trifecta
//
//  Created by Ran Tao on 9.5.12.
//  Copyright (c) 2012 Ran Tao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GameBoardView : UIView
@property (nonatomic, strong) NSArray *columns;
@property (nonatomic) int numColumns;
@property (nonatomic) int numRows;
-(void) drawGameBoard;
-(void) touchedAtPoint:(CGPoint) point;
@end
